/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 16:33:08 by kzeng             #+#    #+#             */
/*   Updated: 2016/09/23 16:33:09 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	i;
	size_t	k;

	dlen = ft_strlen(dst);
	i = dlen;
	k = 0;
	while (size > i + 1)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	if (size < dlen)
		return (size + ft_strlen(src));
	return (dlen + ft_strlen(src));
}
