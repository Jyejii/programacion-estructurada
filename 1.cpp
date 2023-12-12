#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constitución de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {

    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    struct Estudiante *estudiante2 = (struct Estudiante *) malloc(sizeof(struct Estudiante));
    if (estudiante2 == NULL) {
        printf("Error: no se pudo asignar memoria.\n");
        return 1;
    }
    strcpy(estudiante2->nombre, "Ana");
    estudiante2->edad = 22;
    estudiante2->promedio = 9.8;

    struct Estudiante *punteroEst = &estudiante1;
    printf("Estudiante 1 - Nombre: %s, Edad: %d, Promedio: %.2f\n", punteroEst->nombre, punteroEst->edad, punteroEst->promedio);
    
    free(estudiante2);

    return 0;
}
