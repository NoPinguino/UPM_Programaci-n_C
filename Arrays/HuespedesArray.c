#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define NUM_HABITACIONES 10
#define MAX_HUESPEDES 8

/*
Test para comprobar la generación de números aleatorios con srand().
Importante, usamos la librería time.h para generar la semilla de srand() en base a la hora, con una semilla fija SIEMPRE generará los mismos números.
*/
int	main()
{
	int	habitaciones[NUM_HABITACIONES];
	int huespedes;
	srand(time(NULL));

	for (int i = 0; i < NUM_HABITACIONES; i++)
	{
		huespedes = (int) rand() % MAX_HUESPEDES + 1;
		habitaciones[i] = huespedes;
	}

	int sumatorio;
	sumatorio = 0;
	for (int i = 0; i < NUM_HABITACIONES; i++)
	{
		printf("Habitación %d: %d huéspedes.\n", i, habitaciones[i]);
		sumatorio+=habitaciones[i];
	}

	int i;
	i = 0;

	while (i < NUM_HABITACIONES && habitaciones[i] < 5)
	{
		i++;
	}
	printf("\nLa primera habitación con cinco o más huéspedes es la habitación %d\n", i);
	printf("Hay un total de %d huéspedes en el hotel.\n", sumatorio);

	return (0);
}