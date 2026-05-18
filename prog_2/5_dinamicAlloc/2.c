#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * aleatoria(int n){
    int i; char c; char * str;
    str = (char *) malloc((n+1)*sizeof(char));
    
    for(i = 0;i < n;i++){
        c = '0' + rand()%('z'-'0' + 1);
        if((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
            str[i] = c;
        }else{
            i--;
        }
    }
    str[n] = '\0';
    
    return str;
}

int main(){
    srand(time(NULL));
    int n; char * s;
    
    printf("\nSet value for n: "); scanf("%d", &n);
    s = aleatoria(n);
    
    printf("\n%s", s);
    
    free(s);
    return 0;
}
