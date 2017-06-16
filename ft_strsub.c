/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 16:21:56 by kzeng             #+#    #+#             */
/*   Updated: 2016/09/25 16:21:57 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	k;

	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL || sub == NULL)
		return (NULL);
	i = ft_strlen(s);
	k = 0;
	while (start < i && k < len)
	{
		sub[k] = s[start];
		k++;
		start++;
	}
	while (k < len + 1)
		sub[k++] = '\0';
	return (sub);
}
