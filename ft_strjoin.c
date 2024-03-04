/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:56:17 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/11 00:26:56 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_strlen1(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static size_t	ft_next(const char *s1, char *join, size_t size, size_t j)
{
	size_t	i;

	i = 0;
	while (s1[i] && j < size)
	{
		join[j] = s1[i];
		i++;
		j++;
	}
	return (j);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	lens1;
	size_t	lens2;
	size_t	j;

	lens1 = ft_strlen1(s1);
	lens2 = ft_strlen1(s2);
	j = 0;
	join = (char *)malloc((lens1 + lens2 +1) * sizeof(char));
	if (join == NULL)
		return (0);
	j = ft_next(s1, join, lens1 + lens2, j);
	j = ft_next(s2, join, lens1 + lens2, j);
	join[j] = '\0';
	return (join);
}
