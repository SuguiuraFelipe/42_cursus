/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:38:13 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/15 17:58:11 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_char(char *s, unsigned int number, long int len)
{
	while (number > 0)
	{
		s[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (s);
}

static long int	ft_len(int n, int *sign)
{
	long int	len;
	long		nb;

	nb = (long)n;
	len = 0;
	if (nb <= 0)
	{
		len = 1;
		nb = nb * -1; 
		*sign = -1;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*s;
	long int		len;
	unsigned int	number;
	int				sign;

	sign = 1;
	len = ft_len(n, &sign);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!(s))
		return (NULL);
	s[len--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		number = (unsigned int)(-(long)n);
		s[0] = '-';
	}
	else
		number = (unsigned int)n;
	s = ft_char(s, number, len);
	return (s);
}

int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648)); // Teste com INT_MIN
	printf("%s\n", ft_itoa(42));          // Teste com número positivo
	return (0);
}
