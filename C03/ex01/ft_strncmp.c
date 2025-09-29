#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{

		if (s1[i] != s2[i] || s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}

	return (0);
}
int main(void)
{
    // Vamos testar alguns casos práticos
    printf("=== Teste 1: Strings iguais ===\n");
    printf("ft_strncmp: %d\n", ft_strncmp("Hello", "Hello", 5));
    printf("   strncmp: %d\n\n", strncmp("Hello", "Hello", 5));

    printf("=== Teste 2: Primeira diferença ===\n");
    printf("ft_strncmp: %d\n", ft_strncmp("Hello", "Hella", 5));
    printf("   strncmp: %d\n\n", strncmp("Hello", "Hella", 5));
}
