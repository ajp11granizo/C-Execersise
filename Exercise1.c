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
  if (numero % 2 == 0)
  {
    printf("Numero %d es par", numero);
  }
  else
  {
    printf("Numero %d es impar", numero);
  }
}
void tablaMultiplicar()
{
  int numero;
  int resultado;
  printf("Ingrese un número entero: ");
  scanf("%d", &numero);
  printf("Tabla de multiplicar del %d\n", numero);
  for (int i = 0; i <= 10; i++)
  {
    resultado = i * numero;
    printf(" %d * %d = %d\n", numero, i, resultado);
  }
}
// Contador de Dígitos
void contadorDigitos()
{
  int n;
  int count = 0;
  int temp;

  printf("Ingrese un número entero: ");
  scanf("%d", &n);
  // Asegurarse de que el número no sea 0
  temp = n;

  // Contar los dígitos del número
  while (temp != 0)
  {
    temp = temp / 10; // Elimina el último dígito
    count++;          // Incrementa el contador
  }
  // Si el número ingresado es 0, el conteo será 0, así que el programa debería informar que no se puede contar los dígitos de 0
  if (n == 0)
  {
    printf("El número ingresado es 0, no se puede contar sus dígitos con este programa.\n");
  }
  else
  {
    printf("El número tiene: %d dígitos\n", count);
  }
}
// Calcular promedio de 5 notas
void calcularPromedio5()
{
  int arraynotas[4];
  int n = 0;
  int i;
  int suma = 0;
  float porcentaje = 0.60;
  float promedio = 0.0;

  for (i = 0; i <= 4; i++)
  {
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    arraynotas[i] = n;
    suma = suma + arraynotas[i];
  }
  promedio = suma / 5.0; // Usa 5.0 para obtener un resultado en punto flotante
  if (promedio >= porcentaje * 100)
  {
    printf("El promedio es: %f\n", promedio);
  }
  else
  {
    printf("El promedio no es suficiente. El promedio es: %f\n", promedio);
  }
}
// Números Divisibles
void numeroDivisibles()
{
  int arrayNum[101];
  int i = 0;
  for (i = 0; i < 101; i++)
  {
    arrayNum[i] = i; // lleno el array con numeros.
    if (arrayNum[i] % 3 == 0)
    {
      printf("array[%d] = %d\n", i, arrayNum[i]);
    }
  }
}
// Suma numero n
void sumaNumerosN()
{
  int n = 1;
  int numeros[100];
  int suma = 0;
  printf("Ingrese un numero entero: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    numeros[i] = i;
    suma = suma + numeros[i]; // Sumo cada digito
    // printf("array[%d]\n", numeros[i]); //imprimo array
  }
  printf("La suma de los numeros desde 1 hasta %d es: %d\n", n, suma);
}
// Invierte numeros
void invertirNumeros()
{
  int numero, invertido = 0;

  // Pedir al usuario que introduzca un número
  printf("Introduce un número entero: ");
  scanf("%d", &numero);

  // Usar un bucle while para invertir el número
  while (numero != 0)
  {
    // Agregar el último dígito del número a invertido
    invertido = invertido * 10 + numero % 10;

    // Eliminar el último dígito del número
    numero /= 10;
  }

  // Imprimir el número invertido
  printf("Número invertido: %d\n", invertido);
}

void patronAsteristicoImpresos()
{
  int numero=0;
  printf("Introduce un número entero: ");
  scanf("%d", &numero);

  for (int i = 1; i <= numero; i++)
  {
     printf("\n");
    for (int a = 1; a <= i; a++)
    {
      printf("*");
    }
  }
}

int main()
{
  // Obtener la instancia y usar el Singleton
  // int result = sumaNumerosPares();
  // numeroFactorial();
  // numeroParImpar();
  // printf("%d\n", result);
  // tablaMultiplicar();
  // contadorDigitos();
  // calcularPromedio5();
  // numeroDivisibles();
  // sumaNumerosN();
  //invertirNumeros();
  patronAsteristicoImpresos();
  // Liberar la instancia cuando ya no se necesite
  free_instance();
  return 0;
}
