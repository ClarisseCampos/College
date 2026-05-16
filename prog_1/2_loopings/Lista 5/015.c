#include <stdio.h>

int main(){
    int pop_A = 90000000, pop_B = 200000000, time = 0;

    while(pop_A<=pop_B){
        pop_A *= 1.031; pop_B *= 1.015; time++;
    }
    printf("\nTime needed: %d", time);
    //resultado 52

    return 0;
}