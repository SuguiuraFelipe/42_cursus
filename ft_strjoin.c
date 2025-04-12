/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:01:10 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/12 15:34:56 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*sjoin;
	int		i;
	int		j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	sjoin = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (sjoin == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i])
	{
		sjoin[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		sjoin[i] = s2[j];
		i++;
		j++;
	}
	sjoin[i] = '\0';
	return (sjoin);
}

int	main(void)
{
	char *s1 = "Abirid";
	char *s2 = "Bob";

	printf("%s\n", ft_strjoin(s1, s2));
}