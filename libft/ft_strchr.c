/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:05:05 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/21 21:07:57 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (NULL);
}

/*int main(void)
{
    const char *texto = "Hello, world!";
    char *resultado;

    // Teste 1: caractere existente
    resultado = ft_strchr(texto, 'w');
    if (resultado)
        printf("Encontrado: %s\n", resultado); // Deve imprimir "world!"
    else
        printf("Caractere 'w' não encontrado.\n");

    // Teste 2: caractere no início
    resultado = ft_strchr(texto, 'H');
    if (resultado)
        printf("Encontrado: %s\n", resultado); // Deve imprimir "Hello, world!"

    // Teste 3: caractere no fim
    resultado = ft_strchr(texto, '!');
    if (resultado)
        printf("Encontrado: %s\n", resultado); // Deve imprimir "!"

    // Teste 4: caractere que não existe
    resultado = ft_strchr(texto, 'z');
    if (resultado)
        printf("Encontrado: %s\n", resultado);
    else
        printf("Caractere 'z' não encontrado.\n");

    // Teste 5: procurando '\0'
    resultado = ft_strchr(texto, '\0');
    if (resultado)
        printf("Encontrado terminador nulo em: \"%s\"\n", resultado);
    else
        printf("Terminator nulo não encontrado.\n");

    return 0;
}*/