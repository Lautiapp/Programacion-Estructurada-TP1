#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int tiempoTrabajado;

    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%d", &tiempoTrabajado);

    int sueldo = tiempoTrabajado * 10;

    printf("Su sueldo es de: $%d", sueldo);
    
    return 0;
}