/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:24:45 by event             #+#    #+#             */
/*   Updated: 2023/03/14 13:30:41 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_freesplit(char **res)
{
	int	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (1);
}

int	ft_parts(char *s, char c)
{
	int	i;
	int	parts;

	parts = 0;
	i = 0;
	if (s[i] != c && s[i] != 0)
		parts++;
	while (s[i])
	{
		if ((s[i + 1] != c) && (s[i] == c) && s[i + 1])
			parts++;
		i++;
	}
	return (parts);
}

void	part_cpy(char *dst, char *src, char c)
{
	int	i;

	i = 0;
	while ((src[i] != c) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

int	part(char **res, char *s, char c)
{
	int	i;
	int	x;
	int	part;

	part = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			x = 0;
			while ((s[i + x] != c) && s[i + x])
				x++;
			res[part] = (char *)malloc(sizeof(char) * (x + 1));
			if (res[part] == NULL)
				return (ft_freesplit(res));
			part_cpy(res[part], s + i, c);
			i = i + x;
			part++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		parts;

	parts = ft_parts((char *)s, c);
	res = (char **)ft_calloc(parts + 1, sizeof(char *));
	if (res == NULL)
		return (NULL);
	res[parts] = 0;
	if (part(res, (char *)s, c))
		res = NULL;
	return (res);
}
