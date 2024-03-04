/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 01:05:46 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/12 22:17:35 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_countword(const char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c && str[i])
			word++;
		while (str[i] != c && str[i])
			i++;
	}
	return (word);
}

static char	*ft_strdup1(const char *s1, char *dup, int start, int end)
{
	int	i;
	int	j;

	i = start;
	j = 0;
	dup = (char *)malloc(((end - start) + 1) * sizeof(char));
	if (dup == NULL)
		return (0);
	while (i < end)
	{
		dup[j] = s1[i];
		i++;
		j++;
	}
	dup[j] = '\0';
	return (dup);
}

void	ft_free(char **s, int word)
{
	int	pro;

	pro = 0;
	while (pro <= word)
	{
		free(s[pro]);
		pro++;
	}
}

static char	**ft_split2(char const *s, char **p, char c, int i)
{
	int		start;
	int		word;

	word = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i > start)
		{
			p[word] = ft_strdup1(s, p[word], start, i);
			if (p[word] == 0)
			{
				ft_free(p, word);
				return (0);
			}
			word++;
		}
	}
	p[word] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		lenp;
	int		i;

	lenp = 0;
	i = 0;
	lenp = ft_countword(s, c);
	if (!s)
		return (NULL);
	p = malloc((lenp + 1) * sizeof(char *));
	if (p == NULL)
		return (0);
	p = ft_split2(s, p, c, i);
	return (p);
}
