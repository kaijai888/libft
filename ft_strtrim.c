/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 16:44:13 by kzeng             #+#    #+#             */
/*   Updated: 2016/09/25 16:44:15 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trimbegin(char const *s)
{
	int		i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}

static int	ft_trimend(char const *s, int len)
{
	int		i;

	i = 0;
	if (len == 0)
		return (i);
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
	{
		len--;
		i++;
		if (len == 0)
			return (i);
	}
	return (i);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		begin;
	int		end;
	int		i;
	int		c;

	ft_initializefour(&begin, &end, &i, &c);
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
		i++;
	begin = ft_trimbegin(s);
	end = ft_trimend(s, i);
	if (begin == i)
		i *= 2;
	str = (char *)malloc(sizeof(char) * (i - begin - end + 1));
	if (str == NULL)
		return (NULL);
	while (begin < i - end)
		str[c++] = s[begin++];
	str[c] = '\0';
	return (str);
}
