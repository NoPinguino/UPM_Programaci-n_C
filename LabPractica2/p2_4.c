/*
Recoge 10 números enteros por la consola y hacer un menú.
*/

#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE 10

void	imprimir_primer_multiplo_tres(int lista[]);
void	imprimir_inverso(int lista[]);
void	imprimir_max_distancia_consecutivos(int lista[]);
void	imprimir_media(int lista[]);
void	imprimir_numeros_perfectos(int lista[]);

int	main()
{
	int	lista[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		bool positivo = false;
		int	num;
		// Con este bucle pido número hasta que el número sea positivo, control con booleanos.
		while (!positivo)
		{
			printf("Introduce un número (%d): \n", i);
			scanf("%d", &num);
			if (num > 0)
			{
				positivo = true;
			}
		}
		lista[i] = num;
	}
	
	bool seguir = true;

	while (seguir)
	{
		int	opcion;
		printf("\n\nElige una opción: \n");
		printf("1. Imprimir primer múltiplo de tres.\n");
		printf("2. Imprimir inverso.\n");
		printf("3. Imprimir máxima distancia de dos números consecutivos.\n");
		printf("4. Imprimir la media de la lista.\n");
		printf("5. Imprimir números perfectos en la lista.\n");
		printf("6. SALIR.\n");
		scanf("%d", &opcion);

		printf("\n"); // Un pequeño salto de linea entre el menú y el resultado para legibilidad

		if (opcion == 1)
		{
			imprimir_primer_multiplo_tres(lista);
		}
		else if (opcion == 2)
		{
			imprimir_inverso(lista);
		}
		else if (opcion == 3)
		{
			imprimir_max_distancia_consecutivos(lista);
		}
		else if (opcion == 4)
		{
			imprimir_media(lista);
		}
		else if (opcion == 5)
		{
			imprimir_numeros_perfectos(lista);
		}
		else if (opcion == 6)
		{
			printf("Saliendo de el menú...\n");
			seguir = false;
		}
		else
		{
			printf("Error: Introduce un valor válido.\n");
		}
	}
	
}

void	imprimir_primer_multiplo_tres(int lista[])
{
	bool primer_multiplo = true;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (lista[i] % 3 == 0 && primer_multiplo)
		{
			printf("El primer múltiplo de tres encontrado es: %d\n", lista[i]);
			primer_multiplo = false;
		}
	}
}

void	imprimir_inverso(int lista[])
{
	printf("Imprimiendo array invertido: \n");
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%d ", lista[ARRAY_SIZE - 1 - i]);
	}
	printf("\n");
}

void	imprimir_max_distancia_consecutivos(int lista[])
{
	int max_distancia = 0;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		int distancia = 0;

		if (i < ARRAY_SIZE - 1)
		{
			distancia = lista[i] - lista[i + 1];
			if (distancia < 0)
			{
				distancia *= -1;
			}
			
			if (distancia > max_distancia)
			{
				max_distancia = distancia;
			}
		}
	}
	printf("La mayor distancia encontrada entre dos elementos consecutivos del array es %d.\n", max_distancia);
}

void	imprimir_media(int lista[])
{
	int sumatorio = 0;
	int	media;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		sumatorio += lista[i];
	}
	media = sumatorio / ARRAY_SIZE;
	printf("La media es %d\n", media);
}

/*
Esto dice la Wikipedia sobre los números perfectos:

Un número perfecto es un número entero positivo que es igual a la suma de sus divisores propios positivos excluyéndose a sí mismo. Dicho de otra forma, un número perfecto es aquel que es amigo de sí mismo.
Así, 6 es un número perfecto porque sus divisores propios positivos son 1, 2 y 3; y 6 = 1 + 2 + 3. Un divisor propio positivo de un número es un factor positivo de ese número que no sea el propio número. Por ejemplo, los divisores propios de 6 son 1, 2 y 3, pero no 6. Los siguientes números perfectos son 28, 496 y 8128.
28 = 1 + 2 + 4 + 7 + 14
496 = 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248
8128 = 1 + 2 + 4 + 8 + 16 + 32 + 64 + 127 + 254 + 508 + 1016 + 2032 + 4064
*/
void	imprimir_numeros_perfectos(int lista[])
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		int	suma_divisores = 0;
		int j = 1;

		while (j < lista[i])
		{
			if (lista[i] % j == 0)
			{
				suma_divisores+=j;
			}
			j++;
		}
		
		if (suma_divisores == lista[i])
		{
			printf("El número %d es un número perfecto.\n", lista[i]);
		}
		else
		{
			printf("El número %d no es un número perfecto.\n", lista[i]);
		}
	}
}