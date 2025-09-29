#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 45;
}
int	main(void)
{
	int n = 1;            // começa em 1
	int *nbr = &n;            // ponteiro nbr guarda o ENDEREÇO de n
	
	printf("antes da função:\n");
	printf("n = %d\n", n);
	printf("*nbr = %d\n", *nbr);

	ft_ft(nbr);

	printf("Depois da função:\n");
        printf("n = %d\n", n);
        printf("*nbr = %d\n", *nbr);
}
