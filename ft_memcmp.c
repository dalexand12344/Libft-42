/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalexand <dalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:04:37 by dalexand          #+#    #+#             */
/*   Updated: 2023/10/10 13:13:51 by dalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	byte_dest;
	unsigned char	byte_src;

	i = 0;
	while (i < n)
	{
		byte_dest = *((unsigned char *)dest + i);
		byte_src = *((unsigned char *)src + i);
		if (byte_dest != byte_src)
			return (byte_dest - byte_src);
		i++;
	}
	return (0);
}
