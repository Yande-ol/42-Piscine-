#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
		return (s1[i] - s2[i]);
}

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
    printf("=== Teste 1: Iguais ===\n");
    printf("ft_strcmp: %d\n", ft_strcmp("Hello", "Hello"));
    printf("   strcmp: %d\n\n", strcmp("Hello", "Hello"));

    printf("=== Teste 2: Primeira diferença ===\n");
    printf("ft_strcmp: %d\n", ft_strcmp("Hello", "Hella"));
    printf("   strcmp: %d\n\n", strcmp("Hello", "Hella"));

    printf("=== Teste 3: Uma string é prefixo da outra ===\n");
    printf("ft_strcmp: %d\n", ft_strcmp("Hello", "HelloWorld"));
    printf("   strcmp: %d\n\n", strcmp("Hello", "HelloWorld"));
}
