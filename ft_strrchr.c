/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:00:05 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/12 17:45:00 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int a)
{
	char			*c;
	unsigned char	l;
	int				i;

	i = 0;
	c = (char *)str;
	l = (unsigned char )a;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (c[i] == l)
			return (c + i);
		i--;
	}
	if (l != 0)
		return (0);
	return (c);
}
