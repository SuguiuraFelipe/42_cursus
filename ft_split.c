/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:41:51 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/10 19:58:20 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	count_words(const char *s, char c)
{
	int	in_word = 0;
	int	count = 0;
	int	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

char	*word_duplicate(const char *start, int len)
{
	char	*word;
	int	i;
	
	i = 0;
	word = (char *) malloc(sizeof(char) * (len + 1)); 
	if (word == NULL)
		return (NULL);
		
	while (i < len) // start[i] != '\0'
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int	i;
	int	words;

	words = count_words(s, c);

	result = (char **) malloc(sizeof(char *) * (words + 1));  
	if (result == NULL)
		return (NULL);

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			const char *start = s;
			int	len = 0;
			
			while (*s != c && *s != '\0')  
			{
				len++;
				s++;
			}
			result[i] = word_duplicate(start, len);
			if (result[i] == NULL) 
				return (NULL);
			i++;
		}
		else
			s++;
	}
	result[i] = NULL; 
	return (result);
}

int	main()
{
	char	**result;
	char	s[] = "Eu amo estudar";
	char	c = ' ';
	int	i = 0;
	
	result = ft_split(s, c);
	if (result == NULL)  
	{
		printf("Erro de alocação de memória\n");
		return (1);
	}

	while (result[i] != NULL)  
	{
		printf("result[%d] = %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result); 
	return (0);
}

