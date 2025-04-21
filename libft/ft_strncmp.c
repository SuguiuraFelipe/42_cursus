/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:06:34 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/21 21:15:14 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] < str2[i])
			return (-1);
		else if (str1[i] > str2[i])
			return (1);
		if (str1[i] == '\0' || str2[i] == '\0')
			break ;
		i++;
	}
	return (0);
}

/*int main(void)
{
    const char *str1 = "Hello, world!";
    const char *str2 = "Hello, word!";
    
    int result = ft_strncmp(str1, str2, 5);
    if (result == 0)
        printf("As primeiras 5 letras das strings são iguais.\n");
    else if (result < 0)
        printf("A primeira string é menor.\n");
    else
        printf("A primeira string é maior.\n");
}*/