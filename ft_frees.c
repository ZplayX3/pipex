/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frees.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlachman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 10:47:44 by tlachman          #+#    #+#             */
/*   Updated: 2023/12/28 10:47:52 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/*Evite des crash en cas de double free*/

void	ft_safe_free(void *ptr)
{
	free(ptr);
	ptr = NULL;
}

/* Evite les leaks si le second split ne marche pas. */

void	ft_free_split(char	**s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_safe_free(s[i]);
		i++;
	}
	ft_safe_free(s);
}
