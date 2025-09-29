#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
int main(void)
{
	int X = 42;
	int Y = 10;

	printf("Antes do armazenamento:\n");
	printf("X = %d, Y = %d\n", X, Y);

	ft_ultimate_div_mod(&X, &Y);

	printf("Depois do armazenamento:\n");
        printf("X = %d, Y = %d\n", X, Y);
}
