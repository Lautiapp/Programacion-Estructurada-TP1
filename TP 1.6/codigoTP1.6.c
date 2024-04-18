#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    
    int lado1;
    int lado2;

    printf("Ingrese el valor del primer lado: ");
    scanf("%d", &lado1);

    printf("Ingrese el valor del segundo lado: ");
    scanf("%d", &lado2);

    double diagonalPpal = sqrt(pow(lado1, 2) + pow(lado2, 2));

    int superficie = lado1 * lado2;

    int perimetro = (lado1 * 2) + (lado2 * 2);

    printf("El valor de la diagonal principal es: %f\n", diagonalPpal);
    printf("El valor de la superficie es: %d\n", superficie);
    printf("El valor del perimetro es: %d\n", perimetro);
    
    return 0;
}