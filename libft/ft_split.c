/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:41:51 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/21 21:06:59 by fsuguiur         ###   ########.fr       */
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

static void	splitstr(char **str, char c, char const *s, size_t countc)
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
		if (str[j++] == NULL)
		{
			str = NULL;
			break ;
		}
	}
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
	splitstr(str, c, s, countc);
	if (str == NULL)
		return (NULL);
	putchar_str(s, str, c, countc);
	return (str);
}

/*int	main(void)
{
	char	**resultado;
	int		i;

	// Teste 1: string simples com separador comum
	resultado = ft_split("ola,mundo,isso,e,um,teste", ',');
	if (!resultado)
	{
		printf("Erro ao alocar memória!\n");
		return (1);
	}
	i = 0;
	while (resultado[i])
	{
		printf("Palavra %d: %s\n", i, resultado[i]);
		free(resultado[i]);
		i++;
	}
	free(resultado);

	// Teste 2: string com separadores consecutivos
	resultado = ft_split("um,,dois,,,tres", ',');
	printf("\nTeste com separadores consecutivos:\n");
	i = 0;
	while (resultado[i])
	{
		printf("Segmento %d: %s\n", i, resultado[i]);
		free(resultado[i]);
		i++;
	}
	free(resultado);

	// Teste 3: string só com separadores
	resultado = ft_split(",,,", ',');
	printf("\nTeste com apenas separadores:\n");
	if (resultado[0] == NULL)
		printf("Resultado está vazio como esperado.\n");
	free(resultado);

	// Teste 4: string vazia
	resultado = ft_split("", ',');
	printf("\nTeste com string vazia:\n");
	if (resultado[0] == NULL)
		printf("Resultado está vazio como esperado.\n");
	free(resultado);

	return (0);
}*/