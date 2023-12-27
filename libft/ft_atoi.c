/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:35:23 by event             #+#    #+#             */
/*   Updated: 2023/03/14 12:35:25 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	nb;
	int	i;
	int	sign;

	i = 0;
	nb = 0;
	sign = 0;
	while (((9 <= nptr[i]) && (nptr[i] <= 13)) || (nptr[i] == 32))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = 1;
		i++;
	}
	while (('0' <= nptr[i]) && (nptr[i] <= '9'))
	{
		nb = nb * 10;
		nb = nb + (nptr[i] - 48);
		i++;
	}
	if (sign == 1)
		nb = -nb;
	return (nb);
}

/*
void	main()
{
	printf("%d\n", ft_atoi("\010 9"));
}
*/
