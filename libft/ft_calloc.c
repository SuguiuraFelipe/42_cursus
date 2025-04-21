/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:10:32 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/21 18:44:04 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb != 0 && size > ((size_t)-1) / nmemb)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ft_bzero(ptr, 1);
		return (ptr);
	}
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*int	main(void)
{
	int	*arr;
	int	n = 5;
	int	i;

	arr = (int *)ft_calloc(n, sizeof(int));
	if (!arr)
	{
		printf("Falha ao alocar memória\n");
		return (1);
	}

	printf("Memória alocada com ft_calloc:\n");
	for (i = 0; i < n; i++)
		printf("arr[%d] = %d\n", i, arr[i]);

	free(arr);
	return (0);
}*/
