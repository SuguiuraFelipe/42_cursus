/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:25:39 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/21 21:05:50 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s || !fd)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/*int main(void)
{
    ft_putstr_fd("Teste no terminal!\n", 1);

    ft_putstr_fd("", 1);
    ft_putchar_fd('\n', 1);
	
    ft_putstr_fd(NULL, 1);

    return 0;
}*/