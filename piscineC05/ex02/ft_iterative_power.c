/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 08:41:51 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/29 19:01:09 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
int	ft_iterative_power(int nb, int power)
{
	int	resultat;
	int	i;

	i = 0;
	resultat = nb * nb;
	if (power < 0)
		return (0);
	if (nb == 0)
	{
		if (power == 0)
			return (1);
		else
			return (0);
	}
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (i < power - 2)
	{
		resultat = resultat * nb;
		i++;
	}
	return (resultat);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(10, 0));
	return (0);
}*/
