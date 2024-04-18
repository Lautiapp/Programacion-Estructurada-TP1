#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int valor1;
    int valor2;

    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1);

    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);

    int total = valor1 + valor2;

    printf("El resultado es: %d",total);
    
    return 0;
}