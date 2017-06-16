/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 11:30:42 by kzeng             #+#    #+#             */
/*   Updated: 2016/09/22 11:30:43 by kzeng            ###   ########.fr       */
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

char		*ft_strstr(char *big, char *little)
{
	size_t	i;
	size_t	k;
	size_t	blen;
	size_t	llen;

	ft_initialize(&i, &k, &blen, &llen);
	blen = ft_strlen(big);
	llen = ft_strlen(little);
	if (big == NULL || little == NULL)
		return (NULL);
	if (little[0] == '\0')
		return (big);
	if (!(ft_strcmp(little, big)))
		return (big);
	while (big[k] != '\0' && (k <= blen - llen))
	{
		if (!(ft_strcmp(little, ft_strsub(big, k, llen))))
			return (big + k);
		k++;
	}
	return (NULL);
}
