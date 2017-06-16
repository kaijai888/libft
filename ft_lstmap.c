/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 17:58:48 by kzeng             #+#    #+#             */
/*   Updated: 2016/09/29 17:58:49 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlist;
	t_list *head;
	t_list *temp;

	if (lst == NULL)
		return (NULL);
	newlist = ft_lstnew(f(lst)->content, f(lst)->content_size);
	if (newlist == NULL)
		return (NULL);
	head = newlist;
	while (lst->next != NULL)
	{
		lst = lst->next;
		temp = ft_lstnew(f(lst)->content, f(lst)->content_size);
		if (temp == NULL)
			return (NULL);
		newlist->next = temp;
		newlist = temp;
	}
	return (head);
}
