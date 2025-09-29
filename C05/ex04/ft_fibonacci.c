#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return -1;

	if (index == 0 )
		return 0;

	if (index == 1)
		return 1;	

	return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}
int main (void)
{
	printf("fibonacci de 1 : %d\n", ft_fibonacci(1));
	printf( "fibonacci de 5 : %d\n", ft_fibonacci(5));
} 
