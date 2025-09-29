#include <stdio.h>
#include <unistd.h>

char 	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ( str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
int main(void)
{
	char orin[] = "eu sou lindo";

	printf ("String original: %s\n", orin);

	printf ("alterada: %s", ft_strupcase(orin));

}
