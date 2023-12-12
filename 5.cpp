#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;

void imprimirEstudiantePorValor(Estudiante est) {
    printf("Imprimir Estudiante por valor: Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}

void modificarEstudiantePorReferencia(Estudiante *est) {
    est->edad = 30;
}


void imprimirEstudiantePorDireccion(Estudiante *est) {
    printf("Imprimir Estudiante por direccion: Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}

int main() {
    Estudiante estudiante1 = {"Jiachen", 18, 7.77};


    printf("Antes de la modificacion:\n");
    imprimirEstudiantePorValor(estudiante1);

    modificarEstudiantePorReferencia(&estudiante1);

    printf("Despues de la modificacion:\n");
    imprimirEstudiantePorDireccion(&estudiante1);

    return 0;
}
