/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:11:58 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/04/17 18:23:58 by fsuguiur         ###   ########.fr       */
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
