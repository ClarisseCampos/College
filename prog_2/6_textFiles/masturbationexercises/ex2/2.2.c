#include <stdio.h>

int main() {
    int value, sum = 0, counter = 0;
    float average;
    FILE *f = fopen("c2.txt", "r");

    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(f, "%d", &value) == 1) {
        sum += value;
        counter++;
    }

    fclose(f);

    if (counter == 0) {
        printf("Arquivo vazio.\n");
        return 0;
    }

    average = (float)sum / counter;

    printf("Soma: %d\n", sum);
    printf("Media: %.2f\n", average);

    return 0;
}