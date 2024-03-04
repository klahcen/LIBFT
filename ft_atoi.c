/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:11:50 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/14 14:44:58 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sin;
	int	resl;
	int	s;

	i = 0;
	s = 0;
	sin = 1;
	resl = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] == '+' || str[i] == '-') && s == 0)
	{
		if (str[i] == '-')
			sin *= -1;
		i++;
		s++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resl = resl * 10 + (str[i] - 48);
		i++;
	}
	return (resl * sin);
}
