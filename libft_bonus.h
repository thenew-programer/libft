/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouryal <ybouryal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:21:19 by ybouryal          #+#    #+#             */
/*   Updated: 2024/10/24 19:22:29 by ybouryal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BONUS_H

# define LIBFT_BONUS_H

# include <stdlib.h>

/**
 * @content:	The data contained in the node.
 * @next:		The address to the next node, or
 *				NULL if the next node is the last one.
*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * Desc:		Allocates and returns a new node.
 *
 * @content:	The content to create the node with.
 *
 * return:		The new node.
*/
t_list	*ft_lstnew(void *content);

/**
 * Desc:	Adds the node 'new' at the beginning of the list.
 *
 * @lst:	The beginning of the list.
 *
 * return:	None
*/
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * Desc:	Counts the number of nodes in a list.
 *
 * @lst:	The beginning of the list.
 *
 * @return:	the length of the list.
*/
int		ft_lstsize(t_list *lst);

/**
 * Desc:	Returns the last node of the list.
 *
 * @lst:	the beginning of the list.
 *
 * return:	Last node of the list.
*/
t_list	*ft_lstlast(t_list *lst);

/**
 * Desc:	Adds the node 'new' at the end of the list.
 *
 * @lst:	The address of a pointer to the first link of a list.
 * @new:	The address of a pointer to the node to be added to
 *			the list.
 *
 * return:	None
*/
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * Desc:	Takes as a parameter a node and frees the memory
 *			of the node's content using the funtion 'del' given
 *			as a param and free the node.
 *
 * @lst:	The node to free.
 * @del:	The address of the function used to del the content
 *
 * return:	None.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * Desc:	Iterates the list 'lst' and applies the function
 *			'f' on the content of each node.
 *
 * @lst:	the address of a pointer to a node.
 * @f:		The address of the function used to iterate on the lst.
 *
 * return:	None.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * Desc:	Iterates the list 'lst' and applies the function 'f'
 *			on the content of each node. Creates a new list
 *			resulting of the successive applications of the
 *			function 'f'. The 'del' function is used to delete
 *			the content of a node if needed.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif
