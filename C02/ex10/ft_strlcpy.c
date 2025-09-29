#include <unistd.h>
#include <stdio.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int src_len;

    i = 0;
    src_len = 0;

    // Primeiro, contar o tamanho de src
    while (src[src_len] != '\0')
        src_len++;

    // Se size for maior que 0, copiamos até size - 1 caracteres
    if (size > 0)
    {
        while (src[i] != '\0' && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0'; // garantir que dest termine com '\0'
    }

    // Retornar o tamanho da string src
    return (src_len);
}
