/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:54:20 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/22 17:39:15 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	if (!src || !dst)
		return (0);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (src_len);
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/*int main(void)
{
    char dest[20];
    const char *src = "Hello, world!";

    size_t result = ft_strlcpy(dest, src, sizeof(dest));
    printf("Resultado da cópia (com ft_strlcpy): \"%s\"\n", dest);
    printf("Tamanho retornado: %zu\n", result);
}*/