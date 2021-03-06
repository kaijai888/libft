/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 22:22:36 by kzeng             #+#    #+#             */
/*   Updated: 2016/09/24 22:22:37 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		write(fd, "\n", 1);
		return ;
	}
	while (s[i] != '\0')
	{
		i++;
	}
	write(fd, s, i);
	write(fd, "\n", 1);
}
