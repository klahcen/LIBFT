/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:41:21 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/11 17:54:51 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (*find == 0)
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while ((str[i + j] || find[j]) && str[i + j] == find[j] && i + j < len)
			j++;
		if (find[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
