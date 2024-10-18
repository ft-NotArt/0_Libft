/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 08:51:26 by anoteris          #+#    #+#             */
/*   Updated: 2024/10/18 16:28:02 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list *current_lst ;
	t_list *next_lst ;
	t_list *current_new ;
	t_list *first_new ;

	if (!lst || !f || !del)
		return NULL ;
	current_lst = lst ;
	current_new = ft_lstnew(f(current_lst->content)) ;
	if (!current_new)
		ft_lstclear(&first_new, del) ;
	first_new = current_new ;
	current_lst = current_lst->next ;
	while (current_lst)
	{
		next_lst = current_lst->next ;
		current_new->next = ft_lstnew(f(current_lst->content)) ;
		if (!current_new)
			ft_lstclear(&first_new, del) ;
		current_new = current_new->next ;
		current_lst = next_lst ;
	}
	return first_new ;
}