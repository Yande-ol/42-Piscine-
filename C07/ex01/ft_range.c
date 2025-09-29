#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *array;
	int i;
	int size;

	if (min >= max)
		return (NULL);

	size = max - min;
	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

int main(void)
{
	int min = 3;
	int max = 8;
	int *arr;
	int i;

	arr = ft_range(min, max);

	if (arr == NULL)
	{
		printf("Intervalo invalido!\n");
		return 1;
	}
	
	printf ("Array gerado de %d ate %d (exclindo %d):\n", min, max, max);
	i = 0;
	while (i < max - min) 
	{
		printf ("%d ", arr[i]);
		i++;
	}
	printf ("\n");
	free(arr);
	return 0;
}
