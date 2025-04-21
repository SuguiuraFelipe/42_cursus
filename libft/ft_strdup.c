/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:11:33 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/21 21:26:16 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;
	int		s1_len;

	s1_len = ft_strlen(s1);
	s2 = (char *)malloc((s1_len + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*int main(void)
{
    const char *original = "Olá, mundo!";
    char *duplicada;

    duplicada = ft_strdup(original);
    if (duplicada)
    {
        printf("Original : %s\n", original);
        printf("Duplicada: %s\n", duplicada);
        free(duplicada);
    }
    else
    {
        printf("Erro ao alocar memória.\n");
    }

    duplicada = ft_strdup("");
    if (duplicada)
    {
        printf("\nString vazia duplicada: \"%s\"\n", duplicada);
        free(duplicada);
    }
    return 0;
}*/