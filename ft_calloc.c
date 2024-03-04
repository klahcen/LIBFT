/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:12:02 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/13 23:23:51 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void			*point;
	unsigned char	*p;
	size_t			i;
	size_t			size_max;

	size_max = 1844674407370955169;
	if (num_elements != 0 && (element_size > size_max / num_elements))
		return (NULL);
	point = malloc(num_elements * element_size);
	if (point == NULL)
		return (0);
	i = 0;
	p = (unsigned char *)point;
	while (i < num_elements * element_size)
	{
		p[i] = 0;
		i++;
	}
	return (point);
}
