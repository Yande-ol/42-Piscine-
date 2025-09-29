#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;
	unsigned int	sum;

	i = 0;
	sum = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);

	if (size > d)
		sum = d + s;
	else
		sum = s + size;

	while (src[i] && size > (d + 1))
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (sum);
}
int	main(void)
{
	char	dest[10] = "dest";
	char	src[10] = "src";
	int	size = 6;

	printf("Dest antes: %s\n", dest);
	printf("Return de strlcat: %d\n", ft_strlcat(dest, src, size));
	printf("Dest depois: %s\n", dest);
}
