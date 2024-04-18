#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int valorVehiculo;
    int cantidadVehiculos;

    printf("Ingrese el valor del vehiculo: ");
    scanf("%d", &valorVehiculo);

    printf("Ingrese la cantidad de vehiculos vendidos: ");
    scanf("%d", &cantidadVehiculos);
    
    int sueldo = 500 + ((valorVehiculo / 10) * cantidadVehiculos) + (50 * cantidadVehiculos);

    printf("Su sueldo es de: $%d", sueldo);

    return 0;
}