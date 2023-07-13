#include <stdio.h>

//Brandon Altamirano

void incrementar(int *num) {
    (*num)++;  // Incrementa el valor apuntado por 'num'
}

int main() {
    int numero = 5;

    printf("Antes de incrementar: %d\n", numero);

    // Llamada a la función incrementar pasando la dirección de memoria de 'numero'
    incrementar(&numero);

    printf("Después de incrementar: %d\n", numero);

    return 0;
}