/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 00:51:46 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/12 17:53:33 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int a)
{
	char			*c;
	unsigned char	l;

	c = (char *)str;
	l = (unsigned char )a;
	while (*c)
	{
		if (*c == l)
			return (c);
		c++;
	}
	if (l != 0)
		return (0);
	return (c);
}
