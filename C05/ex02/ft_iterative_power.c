#include <stdio.h>  

int ft_interative_power(int nb, int power)
{
    int result;
    int i;

    // 🔹 Regra 1: potência negativa não é permitida
    if (power < 0)
        return (0);

    // 🔹 Regra 2: caso base, qualquer número elevado a 0 é 1
    if (power == 0)
        return (1);

    // 🔹 Inicializamos result com 1 e contador i com 0
    result = 1;
    i = 0;

    // 🔹 Loop para multiplicar nb por ele mesmo power vezes
    while (i < power)
    {
        result = result * nb;  // multiplica o acumulador
        i++;                    // avança para a próxima multiplicação
    }

    // 🔹 Retorna o resultado final
    return (result);
}
int main(void)
{
	printf(" Resultado da potencia = %d\n", ft_interative_power( 3, 3));
	return(0);
}
