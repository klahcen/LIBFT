/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:49:08 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/12 16:16:46 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen1(const char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	unsigned int	lens;

	lens = ft_strlen1(s);
	if (start + len > lens)
		len = lens - start;
	if (lens <= start)
		return (ft_strdup(""));
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	j = start;
	i = 0;
	while (i < len && s[i])
	{
		str[i] = s[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
