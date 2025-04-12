/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:54:31 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/12 18:13:56 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;
	int	res_size;
	int	leng;

	leng = ft_strlen(s1);
	start = 0;
	end = leng - 1;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start >= leng)
		return (ft_strdup(""));
	else
	{
		while (end >= 0 && ft_strchr(set, s1[end]))
			end--;
	}
	res_size = end - start + 1;
	return (ft_substr(s1, start, res_size));
}

int	main(void)
{
	char *s1 = "Flamengo obina";
	char *set = "pega na minha";
	printf("%s\n", ft_strtrim(s1, set));
}