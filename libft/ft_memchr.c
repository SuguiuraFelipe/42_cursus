/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:39:59 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/23 16:55:23 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	c = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*int main()
{
	const void *s = "";
	int c = 'e';
	size_t n = 2;
	printf("O resultado: %s\n", ft_memchr(s, c, n));
}*/