/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:15:06 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/11 00:32:44 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int a, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	l;

	i = 0;
	s = (unsigned char *)str;
	l = (unsigned char )a;
	while (i < n)
	{
		if (*s == l)
			return (s);
		s++;
		i++;
	}
	return (0);
}
