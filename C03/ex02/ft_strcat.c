#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
int main(void)
{
    char buffer1[50] = "Hello";
    char buffer2[50] = "Hello";

    printf("=== Teste: Concatenar simples ===\n");
    printf("ft_strcat: %s\n", ft_strcat(buffer1, "World!"));
    printf("   strcat: %s\n\n", strcat(buffer2, "World!"));

    char buffer3[50] = "42 ";
    char buffer4[50] = "42 ";
    printf("=== Teste 2: Concatenar número ===\n");
    printf("ft_strcat: %s\n", ft_strcat(buffer3, "São Paulo"));
    printf("   strcat: %s\n\n", strcat(buffer4, "São Paulo"));
}
