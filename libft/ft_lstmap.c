/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 10:07:44 by niromano          #+#    #+#             */
/*   Updated: 2023/05/11 14:45:31 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*first;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	first = new_lst;
	lst = lst->next;
	while (lst != NULL)
	{
		new_lst->next = ft_lstnew(f(lst->content));
		new_lst = new_lst->next;
		lst = lst->next;
	}
	ft_lstclear(&lst, del);
	return (first);
}
