/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:10:32 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/11 18:10:59 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int str;
	char *ptr;

	str = nmemb * size;
	ptr = malloc(str);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, str);
	return (ptr);
}