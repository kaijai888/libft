/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:30:40 by kzeng             #+#    #+#             */
/*   Updated: 2016/09/22 15:30:41 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int		i;
	int		index;
	char	*ptr;

	i = 0;
	index = 0;
	ptr = s;
	while (s[i] != '\0')
		i++;
	if (s[i] == '\0' && c == 0)
		return ((ptr + i));
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((ptr + i));
		i--;
	}
	return (NULL);
}
