/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 11:17:08 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/21 19:10:32 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
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

/*static void	del(void *content)
{
	free(content);
}*/

/*int	main(void)
{
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew(strdup("Olá"));
	t_list	*node2 = ft_lstnew(strdup("mundo"));
	t_list	*node3 = ft_lstnew(strdup("42"));

	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);

	printf("Lista antes de limpar:\n");
	print_list(head);

	ft_lstclear(&head, del);

	printf("Lista depois de limpar:\n");

	return (0);
}*/