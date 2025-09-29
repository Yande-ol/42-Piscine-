#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{ 
	int i;
	int size;
	int *arr;

	if (min >= max)
	{
		*range = NULL;
		return 0;
	}
	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	if (!arr)
		return -1;

	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return size;
}
#include <stdio.h>
int main(void)
{
	int *arr;
	int i, size = ft_ultimate_range(&arr, 3, 8);

	for (i = 0; i < size; i++)
		printf ("%d ", arr[i]);
		printf("\n");

	free(arr);
	return 0;
}
