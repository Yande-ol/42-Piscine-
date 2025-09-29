#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main(void)
{
    int a = 17;
    int b = 5;
    int div, mod;

    ft_div_mod(a, b, &div, &mod); // passamos os endereços de div e mod

    printf("%d dividido por %d = %d, resto = %d\n", a, b, div, mod);

    return 0;
}
