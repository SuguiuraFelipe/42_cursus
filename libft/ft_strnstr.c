/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:09:39 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/21 21:18:14 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	u;

	i = 0;
	if (!find[0])
		return ((char *)str);
	while (str[i] && i < len)
	{
		u = 0;
		while (str[i + u] == find[u] && (i + u) < len)
		{
			if (find[u + 1] == 0)
				return ((char *)&str[i]);
			u++;
		}
		i++;
	}
	return (0);
}

/*int main(void)
{
    const char *str = "Olá, este é um exemplo de busca em uma string!";
    const char *find = "exemplo";
    const char *find2 = "mundo";

    char *resultado = ft_strnstr(str, find, 30);
    if (resultado)
        printf("Encontrado: %s\n", resultado);
    else
        printf("Substring não encontrada.\n");
}*/