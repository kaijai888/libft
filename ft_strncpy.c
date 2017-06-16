/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 10:41:40 by kzeng             #+#    #+#             */
/*   Updated: 2016/09/21 10:41:41 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, char *src, unsigned int len)
{
	unsigned int	i;
	int				stop;

	i = 0;
	stop = 0;
	while (i < len)
	{
		if (stop == 0)
		{
			if (src[i] == '\0')
				stop = 1;
		}
		if (stop == 1)
			dst[i] = '\0';
		else
			dst[i] = src[i];
		i++;
	}
	return (dst);
}
