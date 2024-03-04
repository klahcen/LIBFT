/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:29:55 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/12 16:56:11 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_strlen1(const char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

static int	ft_check(char c, const char *d)
{
	int	i;

	i = 0;
	while (d[i])
	{
		if (d[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_len(const char *c, const char *d)
{
	int	i;
	int	j;
	int	lend;
	int	lenc;

	i = 0;
	j = 0;
	lend = ft_strlen1(d);
	lenc = ft_strlen1(c);
	while (c[i] && ft_check(c[i], d))
	{
		i++;
		j++;
	}
	i = lenc - 1;
	while (i > j && c[i] && ft_check(c[i], d))
	{
		i--;
		j++;
	}
	return (lenc - j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		k;
	int		j;

	k = ft_len(s1, set);
	i = 0;
	j = 0;
	p = (char *)malloc((k + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	while (s1[i] && ft_check(s1[i], set))
		i++;
	k = ft_strlen1(s1) - 1;
	while (k >= i && s1[k] && ft_check(s1[k], set))
		k--;
	while (s1[i] && i <= k)
		p[j++] = s1[i++];
	p[j] = '\0';
	return (p);
}
