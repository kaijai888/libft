/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 16:37:09 by kzeng             #+#    #+#             */
/*   Updated: 2016/09/25 16:37:10 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		k;
	int		c;
	int		z;

	ft_initializefour(&i, &k, &c, &z);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 != NULL)
		i = ft_strlen(s1);
	if (s2 != NULL)
		k = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (i + k + 1));
	if (str == NULL)
		return (NULL);
	while (c < i)
		str[c++] = s1[z++];
	z = 0;
	while (c < (k + i))
		str[c++] = s2[z++];
	str[c] = '\0';
	return (str);
}
