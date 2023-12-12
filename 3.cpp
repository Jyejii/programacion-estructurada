#include <stdio.h>
#include <string.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

struct Estudiante copiarEstudiante(struct Estudiante est) {
    struct Estudiante nuevoEst;
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;
    return nuevoEst;
}

int main() {
    struct Estudiante estudianteOriginal = {"Jiachen", 18, 6.2};
    struct Estudiante copiaEstudiante = copiarEstudiante(estudianteOriginal);
    printf("Estudiante original - Nombre: %s, Edad: %d, Promedio: %.2f\n", estudianteOriginal.nombre, estudianteOriginal.edad, estudianteOriginal.promedio);
    printf("Copia del estudiante - Nombre: %s, Edad: %d, Promedio: %.2f\n", copiaEstudiante.nombre, copiaEstudiante.edad, copiaEstudiante.promedio);

    return 0;
}
