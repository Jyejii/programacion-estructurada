#include <stdio.h>
#include <string.h>


typedef struct {
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;

int main() {
    Estudiante estudiante3;
    strcpy(estudiante3.nombre, "Jiachen");
    estudiante3.edad = 18;
    estudiante3.promedio = 5.55;


    printf("Estudiante 3 - Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante3.nombre, estudiante3.edad, estudiante3.promedio);

    return 0;
}
