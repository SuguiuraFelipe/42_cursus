/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 11:27:28 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/21 19:12:07 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/*void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *node1 = ft_lstnew(strdup("Olá"));
	t_list *node2 = ft_lstnew(strdup("mundo"));
	t_list *node3 = ft_lstnew(strdup("42"));

	node1->next = node2;
	node2->next = node3;

	printf("Conteúdo da lista com ft_lstiter:\n");
	ft_lstiter(node1, print_content);

	ft_lstclear(&node1, del);

	return (0);
}*/