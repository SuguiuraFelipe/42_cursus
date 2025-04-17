/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:12:23 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/16 18:49:46 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nblong;
	int		i;
	char	c[10];

	nblong = n;
	if (nblong == 0)
		ft_putchar_fd('0', fd);
	i = 0;
	if (nblong < 0)
	{
		ft_putchar_fd('-', fd);
		nblong = nblong * -1;
	}
	while (nblong > 0)
	{
		c[i] = nblong % 10 + 48;
		nblong = nblong / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar_fd(c[i], fd);
		i--;
	}
}
