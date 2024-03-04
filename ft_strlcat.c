/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:44:40 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/13 14:22:19 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_strlen1(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, char *src, size_t n)
{
	size_t	lensrc;
	size_t	lendest;
	size_t	i;
	size_t	j;

	lensrc = 0;
	lendest = 0;
	j = 0;
	lensrc = ft_strlen1(src);
	lendest = ft_strlen1(dest);
	if (lendest >= n)
		return (lensrc + n);
	if (n == 0 && !dest)
		return (lensrc);
	i = lendest;
	if (n > 0)
	{
		while (src[j] && i < n - 1)
			dest[i++] = src[j++];
		dest[i] = '\0';
	}
	return (lensrc + lendest);
}
