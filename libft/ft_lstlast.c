/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:04:17 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/17 18:10:46 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return (NULL);
    while (lst->next != NULL)
        lst = lst->next;
    return (lst);
}

int main(void)
{
    t_list *lista = NULL;

    // Criando nós
    t_list *n1 = ft_lstnew("Primeiro");
    t_list *n2 = ft_lstnew("Segundo");
    t_list *n3 = ft_lstnew("Último");

    // Montando a lista: n1 -> n2 -> n3
    ft_lstadd_front(&lista, n3);  // Lista: n3
    ft_lstadd_front(&lista, n2);  // Lista: n2 -> n3
    ft_lstadd_front(&lista, n1);  // Lista: n1 -> n2 -> n3

    // Pegando o último nó
    t_list *ultimo = ft_lstlast(lista);

    // Imprimindo o conteúdo do último nó
    if (ultimo)
        printf("Último nó: %s\n", (char *)ultimo->content);
    else
        printf("Lista vazia.\n");

    return 0;
}