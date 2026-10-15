#include <stdio.h>

void	converir_a_binario(int	num, int *byte);

int	main()
{
	int	num;
	int byte[8];

	num = 42;
	conv_binary(num, byte);
	for (int i = 0; i < 8; i++)
	{
		printf("%d", byte[i]);
	}
	return (0);
}

void	conv_binary(int	num, int *byte)
{
	for (int i = 0; i < 8; i++)
	{
		
	}
}