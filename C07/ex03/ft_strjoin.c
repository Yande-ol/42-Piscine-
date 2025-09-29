#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	total_len = 0;
	int	i, j, k;
	char	*result;

	if (size == 0)
	{
		result = (char *)malloc(1);
		if (result)
			result[0] = '\0';
		return result;
	}

	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += ft_strlen(sep);
		i++;
	}

	result = (char *)malloc(total_len + 1);
	if (!result)
		return NULL;

	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			result[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j] != '\0')
				result[k++] = sep[j++];
		}
		i++;
	}
	result[k] = '\0';
	return result;
}
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
	char *palavras[] = {"oi", "tudo", "bem"};
	char *resultado;

	resultado = ft_strjoin(3, palavras, " ");
	printf("%s\n", resultado);

	free(resultado);
	return 0;
}

