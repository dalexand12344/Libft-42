/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalexand <dalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:32:43 by dalexand          #+#    #+#             */
/*   Updated: 2023/10/10 13:15:01 by dalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*byte_ptr;

	byte_ptr = (unsigned char *)b;
	while (len--)
	{
		*byte_ptr++ = (unsigned char)c;
	}
	return (b);
}
