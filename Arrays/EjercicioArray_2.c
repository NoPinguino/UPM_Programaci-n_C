/*
Declaramos un array 3 (columnas) x 4 (filas)
Pido al usuario que rellene el array de números enteros (TAN SOLO LAS TRES PRIMERAS FILAS DE CADA COLUMNA)
Al final, asigno la última fila de cada columna como el producto de las tres filas anteriores de la misma columna.
*/

#include <stdio.h>
#define COLUMNAS 3
#define FILAS 4

int	main()
{
	int matriz[COLUMNAS][FILAS];

	int	num;
	for (int i = 0; i < COLUMNAS; i++)
	{
		for (int j = 0; j < FILAS - 1; j++) // Me guardo la última fila vacía para escribir ahí el resultado de los productos
		{
			printf("Introduce un número [%d/%d]\n", i, j);
			scanf("%d", &num);
			matriz[i][j] = num;
		}
	}

	for (int i = 0; i < COLUMNAS; i++)
	{
		int	producto = 1;
		for (int j = 0; j < FILAS - 1; j++)
		{
			producto *= matriz[i][j];
		}
		matriz[i][FILAS - 1] = producto;
	}

	for (int i = 0; i < COLUMNAS; i++)
	{
		printf("Producto de la columna %d, %d \n", i, matriz[i][FILAS - 1]);
	}
}