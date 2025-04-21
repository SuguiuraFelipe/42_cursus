/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:03:16 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/21 21:23:25 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dst_len;
	unsigned int	src_len;

	i = ft_strlen(dst);
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size < 1)
		return (src_len + size);
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (size < dst_len)
		return (src_len + size);
	else
		return (dst_len + src_len);
}

/*int main(void)
{
    char buffer[30] = "Hello, ";
    const char *src = "world!";
    size_t size = sizeof(buffer);

    size_t result = ft_strlcat(buffer, src, size);
    printf("Buffer após ft_strlcat: \"%s\"\n", buffer);
    printf("Tamanho retornado: %zu\n", result);
	
    char buffer2[10] = "Hi ";
    result = ft_strlcat(buffer2, "there!", sizeof(buffer2));
    printf("\nBuffer 2: \"%s\"\n", buffer2);
    printf("Tamanho retornado: %zu\n", result);

    char buffer3[20] = "Teste";
    result = ft_strlcat(buffer3, "Ignorado", 0);
    printf("\nTeste com size = 0, resultado: %zu\n", result);

    return 0;
}*/