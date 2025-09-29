#include <stdlib.h>
 char	*ft_strdup(char *src)
{
	int len = 0;
	char *dup;
	int i;

	while (src[len] != '\0')
		len++;
	dup = (char *)malloc(len + 1);
	if (!dup)
		return NULL;
	i = 0;
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return dup;
}

#include <stdio.h>
int main()
{
	char original[] = "ola yan";
	char *duplicada;

	duplicada = ft_strdup(original);

	printf ("String original: %s\n", original);
	printf ("Stringh duplicada: %s\n", duplicada);

	free(duplicada);

	return 0;
} 
