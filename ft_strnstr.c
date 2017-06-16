/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 12:40:38 by kzeng             #+#    #+#             */
/*   Updated: 2016/09/22 12:40:40 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_initialize(size_t *i, size_t *k, size_t *blen, size_t *llen)
{
	*i = 0;
	*k = 0;
	*blen = 0;
	*llen = 0;
}

char		*ft_strnstr(char *big, char *little, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	blen;
	size_t	llen;
	size_t	n;

	ft_initialize(&i, &k, &blen, &llen);
	blen = ft_strlen(big);
	llen = ft_strlen(little);
	if (big == NULL || little == NULL)
		return (NULL);
	if (little[0] == '\0')
		return (big);
	if (blen < llen || len < llen)
		return (NULL);
	if (!(ft_strcmp(little, big)))
		return (big);
	n = len - llen + 2;
	while (big[k] != '\0' && (k <= blen - llen) && (k < len) && --n > 0)
	{
		if (!(ft_strcmp(little, ft_strsub(big, k, llen))))
			return (big + k);
		k++;
	}
	return (NULL);
}
