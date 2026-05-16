#include <stdio.h>
int main() {
    int i, q = 10, v[q], n;

    for(i = 0; i < q; i++) {
        printf("\n[%d/%d] Set a value: ", i+1, q);
        scanf("%d", &v[i]);
    }

    printf("\nSet a value to find: ");
    scanf("%d", &n);

    // Procura o item
    for(i = 0; i < q; i++) {
        if(v[i] == n) {
            printf("\nItem %d encontrado no endereco %d", n, i);
            break;
        }
    }

    // Se i == q, é porque o loop terminou sem encontrar
    if(i == q) {
        printf("\nItem nao encontrado");
    }

    return 0;
}
