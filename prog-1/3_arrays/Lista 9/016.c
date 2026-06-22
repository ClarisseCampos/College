#include <stdio.h>
int main(){

    int i, v[10], n, counter = 0;

    printf("\nNumber desired: "); scanf("%d", &n);

    for(i = 0; i < 10; i++){
        printf("\n[%d/%d] Set a value ", i+1, 10); scanf("%d", &v[i]);

        if(v[i] == n){
            counter++;
        }
    }
    if(counter > 0){
        printf("\nThe number %d is found %dx in..\n", n, counter);
        for(i = 0;i < 10; i++){
            if(v[i] == n){
                printf("%d, ", i);
            }
        }
    }else{
        printf("\nelement unfinded");
    }

    return 0;
}