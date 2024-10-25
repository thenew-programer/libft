/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouryal <ybouryal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:12:14 by ybouryal          #+#    #+#             */
/*   Updated: 2024/10/24 19:17:01 by ybouryal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	head = ft_lstnew(f(lst->content));
	while (lst)
	{
		lst = lst->next;
		tmp = ft_lstnew(f(lst->content));
		ft_lstadd_back(&head, tmp);
	}
	return (head);
}
