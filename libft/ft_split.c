/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:41:51 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/23 17:58:47 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countc(const char *s, char c)
{
	size_t	i;
	size_t	counter;
	size_t	o;

	i = 0;
	counter = 0;
	while (s[i])
	{
		o = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i++] != c)
			o++;
		if (o != 0)
			counter++;
	}
	return (counter);
}

static void	mensplitstr(char **str, char c, char const *s, size_t countc)
{
	size_t	i;
	size_t	malloc_size;
	size_t	j;

	i = 0;
	j = 0;
	while (j < countc)
	{
		malloc_size = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i++] != c)
			malloc_size++;
		str[j] = (char *)malloc((malloc_size + 1) * sizeof(char));
		if (str[j] == NULL)
		{
			str = NULL;
			break ;
		}
		j++;
	}
}

void	free_split(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static void	putchar_str(char const *s, char **str, char c, size_t countc)
{
	size_t	i;
	size_t	j;
	size_t	o;

	i = 0;
	j = 0;
	while (j < countc)
	{
		o = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] != c && s[i])
			str[j][o++] = s[i++];
		str[j][o] = '\0';
		j++;
	}
	str[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	countc;

	if (!s)
		return (NULL);
	countc = ft_countc(s, c);
	str = (char **)malloc((countc + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	mensplitstr(str, c, s, countc);
	if (str == NULL)
	{
		free_split(str);
		return (NULL);
	}
	putchar_str(s, str, c, countc);
	return (str);
}

/*int	main(void)
{
	char	**resultado;
	int		i;

	resultado = ft_split("ola,mundo", ',');
	printf("Palavra %d: %s\n", i, resultado[i]);
	free(resultado);

	return (0);
}*/