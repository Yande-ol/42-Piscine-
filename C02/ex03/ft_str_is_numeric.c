#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0')
        {
                if(!((str[i] >= 48 && str[i] <= 57)))
                {
                        return 0;
                }
                i++;
        }
        return 1;
}
int main(void)
{
    char s1[] = "123456";
    char s2[] = "Escola42";
    char s3[] = "";
    char s4[] = "C_Program";

    printf("%s =  %d\n", s1, ft_str_is_numeric(s1));
    printf("%s =  %d\n", s2, ft_str_is_numeric(s2));
    printf("%s =  %d\n", s3, ft_str_is_numeric(s3));
    printf("%s =  %d\n", s4, ft_str_is_numeric(s4));

    return (0);
}

