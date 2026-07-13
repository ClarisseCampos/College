#include <stdio.h>
typedef unsigned int uint;

int main(){
    uint aux;
    int i, qZips;
    FILE *f;
    
    f = fopen("funcionarios.dat","rb");
    if(f == NULL){
        printf("\nErro"); return 0;
    }

    qZips = 0;
    while(fread(&aux,sizeof(uint),1,f)){
        qZips++;
    }
    rewind(f);
    uint v[qZips];
    for(i = 0;i < qZips;i++){
        fread(&v[i],sizeof(uint),i,f);
    }
    fclose(f);

    for(i = 0;i < qZips;i++){
        printf("\n%b\n ", v[i]);
    }
    
    return 0;
}