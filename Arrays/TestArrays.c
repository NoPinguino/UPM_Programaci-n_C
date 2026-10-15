#include <stdio.h>

int	main()
{
	// 10 * sizeof(int) bytes reservados
	int	numeros[10];

	// Guardo los elementos en el Array
	for (int i = 0; i < (sizeof(numeros) / sizeof(int)); i++)
	{
		printf("Introduce el elemento %d: \n", i);
		scanf("%d", &numeros[i]);
	}
	// Leo el Array
	for (int i = 0; i < (sizeof(numeros) / sizeof(int)); i++)
	{
		printf("Elemento en índice %d : %d\n", i, numeros[i]);
	}
	return (0);
}