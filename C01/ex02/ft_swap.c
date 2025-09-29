#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int main(void)
{
    int x = 10;
    int y = 20;

    printf("Antes da troca: x = %d, y = %d\n", x, y);

    ft_swap(&x, &y); // passamos os **endereços** de x e y

    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}
