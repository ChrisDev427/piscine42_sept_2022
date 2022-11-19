/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::
 *                                                        */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:56:55 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/29 13:55:49 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
int	ft_is_prime(int nb)
{
	long int	i;

	i = 3;
	if (nb <= 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_is_prime(26));
	return (0);
}*/
