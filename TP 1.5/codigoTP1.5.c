#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    
    int cateto1;
    int cateto2;
    
    printf("Ingrese el valor del primer cateto: ");
    scanf("%d", &cateto1);

    printf("Ingrese el valor del segundo cateto: ");
    scanf("%d", &cateto2);

    int hipotenusaCuadrado = pow(cateto1, 2) + pow(cateto2, 2);
    double hipotenusa = sqrt(hipotenusaCuadrado);

    double perimetro = cateto1 + cateto2 + hipotenusa;

    double superficie = (cateto1 * cateto2) / 2;

    printf("El valor de la hipotenusa es: %f\n", hipotenusa);
    printf("El valor del perimetro es: %f\n", perimetro);
    printf("El valor de la superfice es: %f", superficie);

    return 0;
}