/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalexand <dalexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:03:35 by dalexand          #+#    #+#             */
/*   Updated: 2023/10/12 16:53:34 by dalexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	i;

	i = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			i++;
		while (*s != c && *s)
			s++;
	}
	return (i);
}

static size_t	ft_strplace(const char *s, char c, size_t n)
{
	while (s[n] != '\0' && s[n] != c)
		n++;
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	n;
	size_t	i;

	i = 0;
	n = 0;
	lst = malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (NULL);
	while (i < ft_count(s, c))
	{
		while (s[n] == c)
			n++;
		lst[i] = ft_substr(s, n, ft_strplace(s, c, n) - n);
		if (!lst[i++])
		{
			while (i > 0)
				free(lst[--i]);
			free(lst);
			return (NULL);
		}
		n = ft_strplace(s, c, n) + 1;
	}
	lst[i] = NULL;
	return (lst);
}
