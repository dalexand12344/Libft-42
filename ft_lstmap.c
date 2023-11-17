/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalexand <dalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:41:14 by dalexand          #+#    #+#             */
/*   Updated: 2023/10/10 22:40:19 by dalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*mylist;
	void	*tmp;

	if (!lst)
		return (0);
	mylist = 0;
	while (lst)
	{
		tmp = f(lst->content);
		if (!tmp)
		{
			ft_lstclear(&mylist, del);
			return (0);
		}
		ft_lstadd_back(&mylist, ft_lstnew(tmp));
		lst = lst->next;
	}
	return (mylist);
}
