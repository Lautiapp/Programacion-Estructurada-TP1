#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int valor1;
    int valor2;

    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1);
    
    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);

    int suma = valor1 + valor2;

    int producto = valor1 * valor2;

    int resta = valor1 - valor2;

    printf("El resultado de la suma de los valores es: %d\n", suma);
    printf("El resultado del producto de los valores es: %d\n", producto);
    printf("El resultado de la resta del primer valor por el segundo es: %d", resta);

    return 0;
}