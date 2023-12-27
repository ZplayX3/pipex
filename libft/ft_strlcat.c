/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:34:16 by event             #+#    #+#             */
/*   Updated: 2023/03/14 13:33:21 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lim;
	size_t	size_dest;

	if (dest == NULL && size == 0)
		return (0);
	size_dest = ft_strlen(dest);
	lim = size - size_dest - 1;
	if (size <= size_dest)
		return (size + ft_strlen((char *)src));
	while (*dest)
		dest++;
	i = 0;
	while (i < lim && src[i])
		*dest++ = src[i++];
	if (size >= size_dest)
		*dest = 0;
	return (size_dest + ft_strlen((char *)src));
}
