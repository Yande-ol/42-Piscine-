#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')\
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int main(void)
{
    char prin[] = "Piscina 42!";
    char dest[50]; 

    ft_strcpy(dest, prin);

    printf("String original: %s\n", prin);
    printf("String copiada: %s\n", dest);

    return (0);
}
