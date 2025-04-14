/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:09:39 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/14 16:49:09 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

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
