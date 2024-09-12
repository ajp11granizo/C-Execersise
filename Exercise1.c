#include <stdio.h>
#include <stdlib.h>

// Estructura que representa la instancia del Singleton
typedef struct
{
  int value; // Puedes agregar otros datos según sea necesario
} Singleton;

// Puntero estático para la instancia única del Singleton
static Singleton *instance = NULL;

// Función para obtener la instancia única
Singleton *get_instance()
{
  if (instance == NULL)
  {
    instance = (Singleton *)malloc(sizeof(Singleton));
    if (instance != NULL)
    {
      instance->value = 0; // Inicializar los datos según sea necesario
    }
  }
  return instance;
}

// Función para liberar la instancia del Singleton
void free_instance()
{
  if (instance != NULL)
  {
    free(instance);
    instance = NULL;
  }
}

//  Sumar números pares del 1 al 100. Escribe un programa que use un bucle for para sumar todos los números pares del 1 al 100.
// Imprime el resultado final.
int sumaNumerosPares()
{
  int suma = 0;
  for (int i = 1; i <= 100; i++)
  {
    if (i % 2 == 0)
    {            // Verifica si el número es par
      suma += i; // Suma el número par
    }
  }
  printf("La suma de los números pares del 1 al 100 es: %d\n", suma);
  return suma;
}
// calcule el factorial de un número positivo usando un bucle while
void numeroFactorial()
{
  int n;
  int i = 1;
  int resultado = 1;

  // Solicitar al usuario que ingrese un número
  printf("Ingrese un número entero: ");
  scanf("%d", &n);

  // Calcular el factorial usando un bucle while
  while (i <= n)
  {
    resultado *= i;
    i++;
  }

  // Imprimir el resultado dentro del método factorial
  printf("El factorial de %d es: %d\n", n, resultado);
}

void numeroParImpar()
{
  int numero;
  printf("Ingrese un número entero: ");
  scanf("%d", &numero);
  if (numero%2==0)
  {
    printf("Numero %d es par", numero);
  }
  else
  {
    printf("Numero %d es impar",numero);
  }
}
void tablaMultiplicar(){
  int numero;
  int resultado;
  printf("Ingrese un número entero: ");
  scanf("%d", &numero);
  printf("Tabla de multiplicar del %d\n", numero);
  for (int i = 0; i <=10; i++)
  {
    resultado=i*numero;
    printf(" %d * %d = %d\n", numero, i,resultado);
  }
  
}
int main()
{
  // Obtener la instancia y usar el Singleton
  // int result = sumaNumerosPares();
  //numeroFactorial();
  //numeroParImpar();
  // printf("%d\n", result);
  tablaMultiplicar();
  // Liberar la instancia cuando ya no se necesite
  free_instance();

  return 0;
}
