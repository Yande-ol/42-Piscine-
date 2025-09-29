#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0')
        {
                if(!((str[i] >= 65 && str[i] <= 90)))
                {
                        return 0;
                }
                i++;
        }
        return 1;
}
int main(void)
{
    char s1[] = "OiYan";
    char s2[] = "ESCOLA";
    char s3[] = "";
    char s4[] = "12345";

    printf("%s =  %d\n", s1, ft_str_is_uppercase(s1));
    printf("%s =  %d\n", s2, ft_str_is_uppercase(s2));
    printf("%s =  %d\n", s3, ft_str_is_uppercase(s3));
    printf("%s =  %d\n", s4, ft_str_is_uppercase(s4));

    return (0);
}

