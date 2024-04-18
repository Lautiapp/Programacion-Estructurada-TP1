#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int lado1;
    int lado2;
    int lado3;

    printf("Ingrese la longitud del primer lado: ");
    scanf("%d", &lado1);

    printf("Ingrese la longitud del segundo lado: ");
    scanf("%d", &lado2);

    printf("Ingrese la longitud del tercer lado: ");
    scanf("%d", &lado3);

    int perimetro = lado1 + lado2 + lado3;

    printf("El valor del perimetro es: %d", perimetro);
    
    return 0;
}