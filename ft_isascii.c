/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:21:10 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/11 16:21:23 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isascii(int n)
{
	if (n >= 0 && n <= 127)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isascii(9));
}*/