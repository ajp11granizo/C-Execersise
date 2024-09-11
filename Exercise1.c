#include <stdio.h>
#include <stdlib.h>

// Estructura que representa la instancia del Singleton
typedef struct {
    int value; // Puedes agregar otros datos según sea necesario
} Singleton;

// Puntero estático para la instancia única del Singleton
static Singleton *instance = NULL;

// Función para obtener la instancia única
Singleton* get_instance() {
    if (instance == NULL) {
        instance = (Singleton*)malloc(sizeof(Singleton));
        if (instance != NULL) {
            instance->value = 0; // Inicializar los datos según sea necesario
        }
    }
    return instance;
}

// Función para liberar la instancia del Singleton
void free_instance() {
    if (instance != NULL) {
        free(instance);
        instance = NULL;
    }
}

//  Sumar números pares del 1 al 100. Escribe un programa que use un bucle for para sumar todos los números pares del 1 al 100. 
//Imprime el resultado final.
int sumaNumerosPares() {
    int suma = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {  // Verifica si el número es par
            suma += i;  // Suma el número par
        }
    }
    printf("La suma de los números pares del 1 al 100 es: %d\n", suma);
    return suma;
}

int main() {
    // Obtener la instancia y usar el Singleton
    int result = sumaNumerosPares();
    printf("%d\n", result);

    // Liberar la instancia cuando ya no se necesite
    free_instance();

    return 0;
}
