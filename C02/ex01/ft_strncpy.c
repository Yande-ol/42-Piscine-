#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while( src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
int main(void)
{
	char orig[] = "eu sou o seu pai";
	char dest[50];

	ft_strncpy(dest, orig, 4);

	dest[4] = '\0';
	printf( "string original: %s\n", orig);
	printf("string destino (com apenas com 4 caracter copiado): %s\n", dest);

	ft_strncpy(dest, orig, 20);

	printf("string original: %s\n", orig);
        printf("string destino (com 20 caracteres copiados): %s\n", dest);
	
	return 0;
}
