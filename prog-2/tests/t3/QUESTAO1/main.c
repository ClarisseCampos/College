#include <stdio.h>
typedef struct{
    char nome[21];
    int qEntregas;
    float faturamento;
    int distancia;
}ENTREGADOR;

void funcionariosOrdenados(ENTREGADOR *e,int qFuncionarios,FILE *f){
    int i, j;
    ENTREGADOR aux;

    i=0;
    while(fscanf(f, "%20s %d %f %d", e[i].nome,&e[i].qEntregas, &e[i].faturamento,&e[i].distancia) == 4){
        i++;
    }

    for(i = 0;i < qFuncionarios-1;i++){
        for(j = 0;j < qFuncionarios-1-i; j++){
            if(e[j].faturamento < e[j+1].faturamento){
                aux = e[j];
                e[j] = e[j+1];
                e[j+1] = aux;
            }
        }
    }

}

float average(ENTREGADOR *e,int qFuncionarios, float * ftTotal){
    float sum = 0;
    for(int i = 0;i < qFuncionarios; i++){
        sum += e[i].faturamento;
    }
    *ftTotal = sum;
    return (float)sum/qFuncionarios;
}

void preencherRelatorio(ENTREGADOR *e,int qFuncionarios,FILE *f){
    fputs("Nr. \tEntregador \tEntregas \tFaturamento \tDistancia (km)\n", f);
    for(int i = 0;i < qFuncionarios;i++){
        fprintf(f,"%d\t\t %s\t\t\t %d\t\t\t %.2f\t\t\t %d\n",i+1,e[i].nome,e[i].qEntregas,e[i].faturamento,e[i].distancia);
    }
}
int main(){
    int i, qFuncionarios, ch;
    float ftTotal, media;
    FILE *f;
    
    f = fopen("entregadores.txt","r");
    if(f == NULL){
        printf("\nErro"); return 1;
    }

    qFuncionarios = 0;
    while((ch = fgetc(f)) != EOF){
        if(ch == '\n'){
            qFuncionarios++;
        }
    }
    qFuncionarios++;
    rewind(f);

    ENTREGADOR e[qFuncionarios];

    funcionariosOrdenados(e,qFuncionarios,f);
    fclose(f);
    
    media = average(e, qFuncionarios, &ftTotal);

    f = fopen("relatorio.txt", "w");
    if(f == NULL){
        printf("\nErro"); return 1;
    }
    preencherRelatorio(e,qFuncionarios,f);

    fprintf(f,"\nFaturamento total: %.2f\nFaturamento medio: %.2f", ftTotal,media);
    fclose(f);
    return 0;
}