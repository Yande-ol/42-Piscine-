#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;

	if( nb <= 0)
		return 0;

	i = 1;

	while (i * i <= nb)
	{
		if (i * i == nb)
			return i;
		i++;
	}
	return 0;
}
int main(void)
{
	printf("Se a raiz for inteira vai imprimir um numero sem ser 0\n");
	printf( " raiz de 1 : %d\n", ft_sqrt(1));
	printf( " raiz de 5 : %d\n", ft_sqrt(5));
	printf( " raiz de 9 : %d\n", ft_sqrt(9));
	printf( " raiz de 8 : %d\n", ft_sqrt(8));
	printf( " raiz de 25 : %d\n", ft_sqrt(25));
}
