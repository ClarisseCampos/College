#include <stdio.h>
#define N 16

int crossover(int n, int m){
    return (n >> N) << N | (m & 0xFFFF);
}
int main(){
    int n = 0x12345678,m = 0x6789ABCD;

    printf("\nCrossover: %X\n", crossover(n,m));

    return 0;
}