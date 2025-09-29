#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)

{
	int i;
	int tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = 5;
	int i;

	printf("Array original: ");
	for ( i = 0; i < size; i++)
		printf("%d" , arr[i]);
	printf("\n");

	ft_rev_int_tab(arr, size);

	printf("Array trocado: ");
        for ( i = 0; i < size; i++)
                printf("%d" , arr[i]);
        printf("\n");
	
	return 0;
}
