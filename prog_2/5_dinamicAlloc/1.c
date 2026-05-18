#include <stdio.h>
#include <stdlib.h>

char * gerastr(int n, char c){
    int i;
    char * str = (char*) malloc((n+1)*sizeof(char));
    if(str == NULL){
        printf("\nDeu merda"); return NULL;
    }
    for(i = 0;i < n; i++){
        str[i] = c;
    }
    str[n] = '\0';
    
    return str;
}
int main(){
    int n; char c; char * s;
    printf("\nCaractere: "); scanf("%c", &c);
    printf("\nN de vezes: "); scanf("%d", &n);
    
    s = gerastr(n,c);
    
    printf("\n%s", s);
    
    free(s);
    return 0;
}
