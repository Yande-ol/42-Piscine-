#include <stdio.h>
#include <string.h>

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <seu_login>                                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 00:00:00 by <seu_login>       #+#    #+#             */
/*   Updated: 2025/08/18 00:00:00 by <seu_login>      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** A função ft_strncat copia até 'nb' caracteres da string src para o final da string dest.
** - Primeiro, encontra o fim de dest (caractere '\0').
** - Depois, copia os caracteres de src, até nb ou até encontrar '\0' em src.
** - Coloca '\0' no final do resultado.
**
** Retorna: o ponteiro para dest.
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	// Encontra o fim de dest
	while (dest[i] != '\0')
		i++;

	j = 0;
	// Copia de src para dest, até nb caracteres ou fim de src
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	// Fecha a string resultante
	dest[i] = '\0';

	return (dest);
}
int main(void)
{
    char buffer1[50] = "Hello";
    char buffer2[50] = "Hello";

    printf("=== Teste 1: nb menor que src ===\n");
    printf("ft_strncat: %s\n", ft_strncat(buffer1, "World!", 3)); // só "Wor"
    printf("   strncat: %s\n\n", strncat(buffer2, "World!", 3));

    char buffer3[50] = "42 ";
    char buffer4[50] = "42 ";
    printf("=== Teste 2: nb maior que src ===\n");
    printf("ft_strncat: %s\n", ft_strncat(buffer3, "São Paulo", 20)); // copia tudo
    printf("   strncat: %s\n\n", strncat(buffer4, "São Paulo", 20));

    char buffer5[50] = "Test";
    char buffer6[50] = "Test";
    printf("=== Teste 3: nb = 0 ===\n");
    printf("ft_strncat: %s\n", ft_strncat(buffer5, "Não vai colar", 0)); // nada acontece
    printf("   strncat: %s\n\n", strncat(buffer6, "Não vai colar", 0));
}
