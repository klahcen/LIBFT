/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:54:13 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/14 12:48:35 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*node;

	node = NULL;
	p = NULL;
	if (lst && f && del)
	{
		while (lst != NULL)
		{
			p = ft_lstnew(f(lst->content));
			if (p == NULL)
			{
				ft_lstclear(&node, del);
				return (NULL);
			}
			ft_lstadd_back(&node, p);
			lst = lst->next;
		}
	}
	return (node);
}
