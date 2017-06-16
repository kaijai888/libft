/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 17:58:41 by kzeng             #+#    #+#             */
/*   Updated: 2016/09/29 17:58:42 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst == NULL)
		return ;
	if (lst->next == NULL)
	{
		f(lst);
		return ;
	}
	while (lst->next != NULL)
	{
		f(lst);
		lst = lst->next;
	}
	f(lst);
}
