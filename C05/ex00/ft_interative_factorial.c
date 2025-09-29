#include <unistd.h>
#include <stdio.h>

int	ft_interative_factorial(int nb)
{
	int resultado;
	int i;

	if (nb < 0)
		return 0;
	if (nb == 0 || nb == 1)
		return 1;

	resultado = 1;
	i = 2; 
	while (i <= nb)
	{
		resultado = resultado * i;
		i++;
	}
	return resultado;
}
int main(void)
{
	printf("Faorial de 5 = %d\n", ft_interative_factorial(5));
}
