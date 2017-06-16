/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 20:18:44 by kzeng             #+#    #+#             */
/*   Updated: 2016/09/22 20:18:46 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	int				i;

	if (n == 0)
		return ;
	str = (unsigned char *)s;
	i = 0;
	while (n != 0)
	{
		str[i] = 0;
		i++;
		n--;
	}
}
