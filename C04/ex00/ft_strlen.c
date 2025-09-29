#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}
int main(void)
{
    char texto[] = "Começo";
    int tamanho;

    tamanho = ft_strlen(texto);

    printf("O tamanho da string é: %d\n", tamanho);

    return 0;
}
