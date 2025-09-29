#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	// Se a substring estiver vazia, retorna str
	if (to_find[0] == '\0')
		return (str);

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		// Compara str a partir de i com to_find
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		// Se chegamos ao fim de to_find, encontramos a substring
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	// Não encontrou nada
	return (0);
}
int main(void)
{
    char texto[] = "Eu gosto de programar em C!";
	char palavra1[] = "programar";
	char palavra2[] = "Python";
	char palavra3[] = "";

	// Teste 1: palavra encontrada
	printf("Resultado 1: %s\n", ft_strstr(texto, palavra1));
	// Deve imprimir: "programar em C!"

	// Teste 2: palavra não encontrada
	printf("Resultado 2: %s\n", ft_strstr(texto, palavra2));
	// Deve imprimir: (null)

	// Teste 3: palavra vazia
	printf("Resultado 3: %s\n", ft_strstr(texto, palavra3));
	// Deve imprimir: "Eu gosto de programar em C!"

    return 0;
}
