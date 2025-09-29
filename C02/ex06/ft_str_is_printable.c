#include <unistd.h>
#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 32 && str[i] <= 126))
        {
            return (0);
        }
        i++;
    }
    return (1);
}
int main(void)
{
    // Exemplos de strings
    char s1[] = "Hello World!";    // só caracteres imprimíveis
    char s2[] = "Piscina\n42";     // contém \n (não imprimível)
    char s3[] = "";                // string vazia (considerada válida)
    char s4[] = "Tab\tAqui";       // contém \t (não imprimível)
    char s5[] = "~!@#$%^&*()";     // só imprimíveis (símbolos)

    // Testando cada string
    printf("'%s' -> %d\n", s1, ft_str_is_printable(s1)); // esperado: 1
    printf("'%s' -> %d\n", s2, ft_str_is_printable(s2)); // esperado: 0
    printf("'%s' -> %d\n", s3, ft_str_is_printable(s3)); // esperado: 1
    printf("'%s' -> %d\n", s4, ft_str_is_printable(s4)); // esperado: 0
    printf("'%s' -> %d\n", s5, ft_str_is_printable(s5)); // esperado: 1

    return (0);
}
