#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int i;
	int sinal;
	int numero;

	i = 0;
	sinal = 1;
	numeor = 0;

	while (str[i] == ' ' || (str[i] >= '9' && str[i] <= '13'))
		i++;

	while (str[i] == '+' || str[i] == '-')
	{
		if ( str[i] == '-')
		sinal = - sinal;
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numero = numero * 10 + (str[i] - '0');
		i++;
	
	}
	return (numero * sinal );
}
