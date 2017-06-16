/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 17:58:11 by kzeng             #+#    #+#             */
/*   Updated: 2016/09/29 17:58:12 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lol;

	while ((*alst) != NULL)
	{
		lol = (*alst);
		del((*alst)->content, (*alst)->content_size);
		(*alst) = (*alst)->next;
		free(lol);
		lol = NULL;
	}
}
