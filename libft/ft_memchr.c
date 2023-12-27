/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:32:55 by event             #+#    #+#             */
/*   Updated: 2023/03/14 12:32:56 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*x;

	i = 0;
	x = s;
	while ((i < n) && (x[i] != (unsigned char)c))
		i++;
	if (i < n && x[i] == (unsigned char)c)
		return ((void *)(x + i));
	return (NULL);
}
