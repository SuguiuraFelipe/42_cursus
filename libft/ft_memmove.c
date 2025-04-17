/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:44:39 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/16 16:14:55 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*str_dst;
	unsigned char	*str_src;

	str_src = (unsigned char *)src;
	str_dst = (unsigned char *)dst;
	if (*str_src != '\0' || *str_dst != '\0')
	{
		if (dst > src)
		{
			while (len-- > 0)
				str_dst[len] = str_src[len];
		}
		else
		{
			i = 0;
			while (i < len)
			{
				str_dst[i] = str_src[i];
				i++;
			}
		}
		return (dst);
	}
	return (NULL);
}

/*int main()
{
	void *dst = "";
	const void *src = "";
	size_t len = 8;
	printf("Resultado: %s\n", memmove(dst, src, len));
}*/