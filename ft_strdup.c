/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:11:59 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/11 00:18:14 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		lens1;
	int		i;
	char	*dup;

	lens1 = 0;
	i = 0;
	while (s1[lens1])
		lens1++;
	dup = (char *)malloc((lens1 +1) * sizeof(char));
	if (dup == NULL)
		return (0);
	while (i < lens1)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
