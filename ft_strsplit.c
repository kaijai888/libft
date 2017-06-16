/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 17:34:29 by kzeng             #+#    #+#             */
/*   Updated: 2016/09/25 17:34:30 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nwords(char const *s, char c)
{
	int		nwords;
	int		i;
	int		begin;
	int		len;

	ft_initializefour(&nwords, &i, &begin, &len);
	while (s[len] != '\0')
		len++;
	while (s[i] != '\0')
	{
		if (begin == 0 && s[i] != c)
		{
			begin = 1;
			nwords++;
		}
		if (i <= len - 1)
		{
			if (begin == 1 && s[i + 1] == c)
				begin = 0;
		}
		i++;
	}
	return (nwords);
}

static char	*ft_word(char const *s, int startindex, int endindex)
{
	char	*word;
	int		k;

	word = (char *)malloc(sizeof(char) * (endindex - startindex + 1));
	if (word == NULL)
		return (NULL);
	k = 0;
	while (startindex < endindex)
	{
		word[k] = s[startindex];
		k++;
		startindex++;
	}
	word[k] = '\0';
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**fresh;
	int		i;
	int		startindex;
	int		endindex;
	int		nwords;

	if (s == NULL)
		return (NULL);
	ft_initializefour(&i, &startindex, &endindex, &nwords);
	nwords = ft_nwords(s, c);
	if ((fresh = (char **)malloc(sizeof(char *) * (nwords + 1))) == NULL)
		return (NULL);
	while (i < nwords)
	{
		startindex = endindex;
		while (s[startindex] == c)
			startindex++;
		endindex = startindex;
		while (s[endindex] != c && s[endindex] != '\0')
			endindex++;
		if ((fresh[i++] = ft_word(s, startindex, endindex)) == NULL)
			return (NULL);
	}
	fresh[i] = 0;
	return (fresh);
}
