/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 11:12:11 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/21 18:50:09 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}

void	del(void *content)
{
	free(content);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

/*int	main(void)
{
	t_list *node1 = ft_lstnew(strdup("Olá"));
	t_list *node2 = ft_lstnew(strdup("mundo"));

	node1->next = node2;

	printf("Lista original:\n");
	print_list(node1);

	ft_lstdelone(node1, del);

	printf("Lista após ft_lstdelone no primeiro nó:\n");
	print_list(node2);

	ft_lstdelone(node2, del);

	return (0);
}*/