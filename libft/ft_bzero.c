/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:03:49 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/22 18:00:48 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*output;

	output = s;
	i = 0;
	while (i < n)
	{
		output[i] = 0;
		i++;
	}
}

/*int main(void)
{
	char str[10] = "abcdefghi";
	printf("Antes do ft_bzero: %s\n", str);
	ft_bzero(str + 3, 1);
	printf("Depois do ft_bzero: %s\n", str);
	return (0);
}*/