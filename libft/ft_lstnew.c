/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:18:06 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/17 16:32:21 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

int	main(void)
{
	char	*str;
	t_list	*node;

	str = "Olá, mundo!";
	node = ft_lstnew(str);
	printf("Conteúdo: %s\n", (char *)node->content);
	printf("Próximo: %p\n", node->next); // Deve imprimir (nil) ou 0
	return (0);
}
