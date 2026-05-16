#include <stdio.h>

int main() {
    int a,b,c,d,e, afirmador = 0;

    for(;;){
        printf("\nSet 5 numbers between 1-6: ");
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        scanf("%d", &d);
        scanf("%d", &e);
    if(a==b || b == c || c == d || d == e){
        // algum eh igual
        if(a==b && b == c && c == d && d == e){
            printf("\nTodos os valores sao iguais");
        }else{
            //Ha ao menos um diferente

            if((a!=b && b == c && c == d && d == e) || (b!= a && a == c && c == d && d == e) || (c!= a && a == b && b==d && d == e) || (d!=a && a==b && b==c && c == e) || (a==b && b == c && c == d && d != e)){
                printf("\nHá 4 valores iguais e um diferente");
            }else{
                // ha uma dupla ou um trio (inclui interseccao)
                if(a==b){
                    a = b;
                    if(a==c||a==d||a==e){
                        afirmador = 1;
                    }
                }
                if(a==c){
                    a = c;
                    if(a==b||a==d||a==e){
                        afirmador = 1;
                    }
                }
                if(a==d){
                    a = d;
                    if(a==b||a==c||a==e){
                        afirmador = 1;
                    }
                }
                if(a==e){
                    a = e;
                    if(a==b||a==c||a==d){
                        afirmador = 1;
                    }
                }
                if(b==c){
                    b = c;
                    if(b==d||b==e){
                        afirmador = 1;
                    }
                }
                if(e==d){
                    afirmador = 1;
                    }

                if(afirmador == 1){
                    printf("\nFULL-HAND");
                }
            }
        }
    }else{
        printf("\nNenhuma combinacao, pois os valores formam uma sequencia");
    }
    }
    return 0;
    }