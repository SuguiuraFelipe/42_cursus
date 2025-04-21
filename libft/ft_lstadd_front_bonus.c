/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:12:55 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/21 16:29:25 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int main(void)
{
	t_list *lista = NULL;
	t_list *n1;
	t_list *n2;

	n1 = ft_lstnew("Segundo");
	n2 = ft_lstnew("Primeiro");

	ft_lstadd_front(&lista, n1);

	ft_lstadd_front(&lista, n2);

	t_list *atual = lista;
	while (atual)
	{
		printf("Conteúdo: %s\n", (char *)atual->content);
		atual = atual->next;
	}

	return (0);
}*/