/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:52:30 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/13 22:38:30 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p;
	t_list	*q;

	p = *lst;
	if (lst && del)
	{	
		while (p != NULL)
		{
			q = p;
			del(p->content);
			p = p->next;
			free(q);
		}
	}
	*lst = NULL;
}
