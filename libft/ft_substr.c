/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:45:30 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/23 17:53:55 by fsuguiur         ###   ########.fr       */
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
	if (s == NULL)
		return (ft_strdup(""));
	while (s[slen] != '\0')
		slen++;
	if (start > slen)
		return (ft_strdup(""));
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
    const char* str = NULL;
    int start = 7;
    int length = 5;

    char* result = ft_substr(str, start, length);
    
    if (result != NULL) {
        printf("Substring: %s\n", result);
        free(result);
    } else {
        printf("Erro ao extrair a substring.\n");
    }

    return 0;
}*/
