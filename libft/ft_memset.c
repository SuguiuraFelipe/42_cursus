/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:47:14 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/23 17:00:01 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)b;
	c = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

/*int main(void)
{
    char buffer1[20] = "ABCDEFGHIJ";
    char buffer2[20] = "ABCDEFGHIJ";

    printf("Original buffer: %s\n", buffer1);

    ft_memset(buffer1, 'X', 5);
    memset(buffer2, 'X', 5); // versão da libc para comparação

    printf("ft_memset result: %s\n", buffer1);
    printf("memset result   : %s\n", buffer2);

    return 0;
}*/