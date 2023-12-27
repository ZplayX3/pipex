/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:33:37 by event             #+#    #+#             */
/*   Updated: 2023/03/14 12:33:39 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	size;

	if ((unsigned int)ft_strlen(s) < start)
		size = 0;
	else if (len < (unsigned int)ft_strlen((char *)s) - start)
		size = len;
	else
		size = (unsigned int)ft_strlen((char *)s) - start;
	dst = malloc(size + 1);
	if (dst == 0)
		return (NULL);
	if (start >= (unsigned int)ft_strlen((char *)s))
	{
		*dst = 0;
		return (dst);
	}
	ft_strlcpy(dst, s + start, size + 1);
	return (dst);
}
/*
void	main()
{
	printf("%s \n", ft_substr("hola", 0, -1));
}
*/
