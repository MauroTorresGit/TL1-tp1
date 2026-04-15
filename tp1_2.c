#include <stdio.h>
#include <stdlib.h>

int calcularCuadrado (int num) {
    int cuadrado = num * num;

    return cuadrado;
}

void guardarCuadrado (int num, int *res) {
    //res = malloc(sizeof(int));
    *res = num * num;
    
}

int mostrar (int num) {
    printf("Contenido de la variable: %d\n", num);
    printf("Direccion de la variable: %p\n", &num);
}

void invertir (int *a, int *b) {
        int aux = *a;
        *a = *b;
        *b = aux;
}

void ordenar (int *a, int *b) {
    if (*a > *b) {
        int aux = *a;
        *a = *b;
        *b = aux;
    }
}

int main () {
    int a = 5, b = 7;
    int res = 0;

    printf("Ingrese un valor\n");
    scanf("%d", &a);
    printf("Ingrese un valor\n");
    scanf("%d", &b);

    int cuadrado = calcularCuadrado(a);

    mostrar(a);

    guardarCuadrado(a, &res);
    printf("res: %d\n", res);

    invertir(&a, &b);

    printf("Invertido A: %d\n", a);
    printf("Invertido B: %d\n", b);

    ordenar(&a, &b);

    printf("Ordenado A: %d\n", a);
    printf("Ordenado B: %d\n", b);

    return 0;
}