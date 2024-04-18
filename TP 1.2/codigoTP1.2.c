#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int valor1;
    int valor2;
    int valor3;

    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1);

    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);

    printf("Ingrese el tercer valor: ");
    scanf("%d", &valor3);

    int total = valor1 + valor2;

    total += valor3;

    printf("El total es: %d", total);
    
    return 0;
}