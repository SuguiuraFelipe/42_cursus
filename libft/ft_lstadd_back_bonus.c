/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:11:58 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/22 17:37:06 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}

/*static void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}*/

/*int	main(void)
{
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew("Olá");
	t_list	*node2 = ft_lstnew("mundo");
	t_list	*node3 = ft_lstnew("42");

	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);

	printf("Conteúdo da lista:\n");
	print_list(head);

	t_list *tmp;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

	return (0);
}*/