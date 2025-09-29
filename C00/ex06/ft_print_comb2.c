#include <unistd.h>

static void print_dois_digitos(int n)
{
	char dez;
	char uni;

	dez = (char) ((n / 10) + '0');
	uni = (char) ((n % 10) + '0');
	write( 1, &dez, 1);
	write( 1, &uni, 1);
}

void ft_print_comb2(void)
{
	int a, b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_dois_digitos(a);
			write(1, " ", 1);
			print_dois_digitos(b);

			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
int main(void)
{
	ft_print_comb2();
}	
