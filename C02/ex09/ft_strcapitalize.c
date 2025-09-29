#include <stdio.h>
#include <unistd.h>

char    *ft_strcapitalize(char *str)
{
    int i;
    int is_new_word; // flag: 1 = próximo caractere pode iniciar palavra, 0 = estamos no meio de uma palavra

    i = 0;
    is_new_word = 1; // no início da string, o primeiro caractere pode ser o começo de uma palavra

    while (str[i] != '\0')
    {
        // se for letra maiúscula, transforma em minúscula (padronizamos tudo antes)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;

        // se estamos no começo de uma palavra e o caractere é letra minúscula
        if (is_new_word && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - 32;  // transforma em maiúscula
            is_new_word = 0;       // agora já não é mais início de palavra
        }
        // se o caractere for um número, ele também "abre a palavra"
        else if (str[i] >= '0' && str[i] <= '9')
            is_new_word = 0;
        // se não for alfanumérico → prepara para próxima palavra
        else if (!(str[i] >= 'a' && str[i] <= 'z')
              && !(str[i] >= '0' && str[i] <= '9'))
            is_new_word = 1;

        i++;
    }
    return (str);
}
int main(void)
{

	char s1[] = "oi, tudo bem?";
	char s2[] = "42porto";
	char s3[] = "";

	printf ("antes: %s\n", s1);
	printf ("Depois: %s\n\n", ft_strcapitalize(s1));


	printf ("antes: %s\n", s2);
        printf ("Depois: %s\n\n", ft_strcapitalize(s2));

	printf ("antes: %s\n", s3);
        printf ("Depois: %s\n\n", ft_strcapitalize(s3));
}
