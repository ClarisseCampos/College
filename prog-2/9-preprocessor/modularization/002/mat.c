#include "mat.h"

float quadrado(float x){
    return x*x;
}
float cubo(float x){
    return x*x*x;
}
int fatorial(int x){
    int i,ft = 1;
    for(i = x;i > 0; i--){
        ft = ft*i;
    }
    return ft;
}