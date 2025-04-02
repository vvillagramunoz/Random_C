#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializar la semilla para el generador de números aleatorios
    srand(time(0));

    // Generar un número aleatorio entre 0 y RAND_MAX
    int numeroAleatorio = rand();

    // Imprimir el número aleatorio
    printf("Número aleatorio: %d\n", numeroAleatorio);

    return 0;
}
