#include <stdio.h>
#include <unistd.h>

char    *ft_strlowcase(char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0')
        {
                if ( str[i] >= 'A' && str[i] <= 'Z')
                {
                        str[i] = str[i] + 32;
                }
                i++;
        }
        return (str);
}
int main(void)
{
        char orin[] = "EU SOU LINDO";

        printf ("String original: %s\n", orin);

        printf ("alterada: %s", ft_strlowcase(orin));

}

