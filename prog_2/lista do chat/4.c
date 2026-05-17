#include <stdio.h>
//Data futura

typedef struct{
    int d,m,a;
}DATA;

void inputdatas(DATA * hoje){
    int i = 0,j, datas[3] = {0};
    char str[11];
    printf("Data (dd/mm/aaaa): "); scanf("%10s", str);
    
    for(j = 0;str[j] != '\0';j++){
        if(str[j] == '/'){
            i++;
        }else{
            datas[i] = datas[i] * 10 + (str[j] - '0');
        }
    }
    hoje->d = datas[0]; hoje->m = datas[1]; hoje->a = datas[2]; 
}
DATA avancarDia(DATA d){
    //considerei todos os meses tend0 30 dias, fds
    DATA amanha = d;
    amanha.d++;
    if(amanha.d > 30){
        amanha.d = 1; amanha.m++;
        if(amanha.m == 13){
            amanha.m = 1; amanha.a++;
        }
    }
    return amanha;
}
int main(){
    DATA hoje, amanha;
    
    inputdatas(&hoje);
    amanha = avancarDia(hoje);
    printf("\nAmanha: %d/%d/%d", amanha.d, amanha.m, amanha.a);
    
    return 0;
}
