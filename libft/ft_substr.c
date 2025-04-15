/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:45:30 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/14 18:11:12 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	unsigned int		slen;
	char				*subs;

	i = 0;
	slen = 0;
	while (s[slen] != '\0')
		slen++;
	if (start > slen)
		return (NULL);
	if (start + len > slen)
		len = slen - start;
	subs = (char *)malloc((len + 1) * sizeof(char));
	if (subs == NULL)
		return (NULL);
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[len] = '\0';
	return (subs);
}

/*int main() {
    const char* str = "Hello, world!";
    int start = 7;
    int length = 5;

    char* result = ft_substr(str, start, length);
    
    if (result != NULL) {
        printf("Substring: %s\n", result); // Saída: world
        free(result); // Libera a memória alocada
    } else {
        printf("Erro ao extrair a substring.\n");
    }

    return 0;
}*/
