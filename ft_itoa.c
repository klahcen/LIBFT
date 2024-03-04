/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:43:53 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/14 14:49:32 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_strlen1(int nbr)
{
	int		len;
	long	n;

	len = 0;
	n = nbr;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_putnbr(int n, char *p, int len, int i)
{
	int		j;
	int		y;
	long	divso;
	long	nbr;

	nbr = n;
	y = 0;
	if (nbr < 0)
		nbr *= -1;
	while (nbr >= 0 && i < ft_strlen1(n))
	{
		j = 0;
		divso = 1;
		while (j < (len - y - 2))
		{
			divso *= 10;
			j++;
		}
		p[i++] = nbr / divso + 48;
		nbr = nbr % divso;
		y++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		len;

	len = 0;
	if (n == 0)
		len = 1;
	else
		len = ft_strlen1(n);
	a = (char *)malloc((len + 1) * sizeof(char));
	if (a == NULL)
		return (0);
	if (n < 0)
	{
		a[0] = '-';
		a = ft_putnbr(n, a, len, 1);
	}
	else if (n == 0)
	{
		a[0] = '0';
		a[1] = '\0';
		return (a);
	}
	else
	a = ft_putnbr(n, a, len + 1, 0);
	return (a);
}
