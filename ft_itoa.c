/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 17:56:14 by kzeng             #+#    #+#             */
/*   Updated: 2016/09/25 17:56:15 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_min(int n)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * 12);
	if (str == NULL)
		return (NULL);
	i = 10;
	str[11] = '\0';
	str[0] = '-';
	while (i > 0)
	{
		str[i] = ((n % 10) * (-1)) + '0';
		n /= 10;
		i--;
	}
	return (str);
}

static void	ft_init(int *a, int *b, int *c, int n)
{
	*a = 0;
	*b = 1;
	*c = n;
}

char		*ft_itoa(int n)
{
	int		neg;
	int		len;
	int		num;
	char	*str;

	ft_init(&neg, &len, &num, n);
	if (n == -2147483648)
		return (ft_min(n));
	if (n < 0)
		neg = 1;
	if (n < 0)
		n *= -1;
	while ((num /= 10) != 0)
		len++;
	if ((str = (char *)malloc(sizeof(char) * (neg + len + 1))) == NULL)
		return (NULL);
	str[len + neg] = '\0';
	if (neg == 1)
		str[0] = '-';
	while ((len + neg - 1) > (neg - 1))
	{
		str[len-- + neg - 1] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
