#include <unistd.h>

/*
** ft_putnbr: imprime um número inteiro na tela, podendo ser negativo
*/
void ft_putnbr(int nb)
{
    char c;  // para converter cada dígito em caractere

    // caso especial: o menor valor de int (-2147483648) não pode ser invertido
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }

    // se o número for negativo, escreve '-' e transforma em positivo
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }

    // se o número tiver mais de um dígito, chama a função recursivamente
    if (nb >= 10)
        ft_putnbr(nb / 10);

    // escreve o último dígito (ou único dígito) como caractere
    c = (nb % 10) + '0';
    write(1, &c, 1);
}
int main(void)
{
    ft_putnbr(42);
    write(1, "\n", 1);   // pular linha
    ft_putnbr(-12345);
    write(1, "\n", 1);
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    return 0;
}
