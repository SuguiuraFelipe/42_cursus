/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:58:21 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/17 18:03:04 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while(lst != NULL)
    {
        count++;
        lst = lst->next;
    }
        
    return (count);
}

int main(void)
{
    t_list *lista = NULL;

    t_list *n1 = ft_lstnew("Um");
    t_list *n2 = ft_lstnew("Dois");
    t_list *n3 = ft_lstnew("Três");

    ft_lstadd_front(&lista, n3);
    ft_lstadd_front(&lista, n2);
    ft_lstadd_front(&lista, n1);

    int tamanho = ft_lstsize(lista);
    printf("Tamanho da lista: %d\n", tamanho);

    return 0;
}
