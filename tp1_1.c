#include <stdio.h>
#include <stdlib.h>

int main () {
    int *p;
    int numero = 10;

    p = malloc(sizeof(int));

    *p = numero;

    printf("Contenido del puntero: %d\n", *p);
    printf("Direccion de memoria almacenada del puntero: %p\n", p);
    printf("Direccion de memoria del puntero: %p\n", &p);
    printf("Direccion de memoria de la variable: %d\n", &numero);
    printf("Tamaño de memoria: %d\n", sizeof(int));


    return 0;
}