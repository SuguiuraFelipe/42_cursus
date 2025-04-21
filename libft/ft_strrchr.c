/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:05:52 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/21 21:25:11 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i != -1)
	{
		if (s[i] == (char)c)
		{
			return (((char *)s) + i);
		}
		i--;
	}
	return (0);
}

/*int main(void)
{
    const char *str = "Olá, mundo! Bem-vindo ao universo de programação!";
    
    char *resultado = ft_strrchr(str, 'o');
    if (resultado)
        printf("Última ocorrência de 'o': %s\n", resultado);
    else
        printf("Caractere não encontrado.\n");
}*/