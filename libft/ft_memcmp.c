/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:08:46 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/22 17:37:49 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}

/*int main(void)
{
    char str1[] = "Hello, world!";
    char str2[] = "Hello, world!";
    char str3[] = "Hello, worle!";
    char str4[] = "Hello";

    printf("Teste 1 (iguais): %d\n", ft_memcmp(str1, str2, strlen(str1)));
    printf("Teste 2 (diferentes): %d\n", ft_memcmp(str1, str3, strlen(str1)));
    printf("Teste 3 (tamanho menor): %d\n", ft_memcmp(str1, str4, 5));
    printf("Teste 4 (zero bytes): %d\n", ft_memcmp("abc", "xyz", 0));

    return 0;
}*/