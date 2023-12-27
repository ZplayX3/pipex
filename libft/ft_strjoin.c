/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:27:20 by event             #+#    #+#             */
/*   Updated: 2023/03/14 12:27:21 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*s3;

	i = 0;
	s3 = malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (s3 == 0)
		return (NULL);
	ft_strlcpy(s3, s1, ft_strlen((char *)s1) + 1);
	while (s1[i])
		i++;
	ft_strlcpy(s3 + i, s2, ft_strlen((char *)s2) + 1);
	return (s3);
}
