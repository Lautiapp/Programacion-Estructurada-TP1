#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int valorHora;
    int tiempoTrabajado;

    printf("Ingrese el valor de la hora de trabajo: ");
    scanf("%d", &valorHora);

    printf("Ingrese el total de horas trabajadas: ");
    scanf("%d", &tiempoTrabajado);

    int sueldo = valorHora * tiempoTrabajado;

    printf("Su sueldo es de: $%d", sueldo);
    
    return 0;
}