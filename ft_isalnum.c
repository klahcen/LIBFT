/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:36:24 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/11 00:25:36 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_isalpha1(int a)
{
	if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
		return (1);
	else
		return (0);
}

static int	ft_isdigit1(int a)
{
	if (a >= 48 && a <= 57)
		return (1);
	else
		return (0);
}

int	ft_isalnum(int a)
{
	if (ft_isalpha1(a) || ft_isdigit1(a))
		return (1);
	else
		return (0);
}
