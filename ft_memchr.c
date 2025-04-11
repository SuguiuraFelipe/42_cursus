/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:39:59 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/11 16:41:07 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *str;

	c = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}