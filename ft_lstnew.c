/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalexand <dalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:36:40 by dalexand          #+#    #+#             */
/*   Updated: 2023/10/06 14:41:38 by dalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*rst;

	rst = (t_list *)malloc(sizeof(t_list));
	if (!rst)
		return (NULL);
	rst->content = content;
	rst->next = NULL;
	return (rst);
}
