/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:05:05 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/23 18:22:00 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

/*int main(void)
{
	const char *texto = "Hello, world!";
	char *resultado;

	resultado = strchr(NULL, 'w');
	if (resultado)
		printf("Encontrado: %s\n", resultado);
	else
		printf("Caractere 'w' não encontrado.\n");
	return (0);
}*/