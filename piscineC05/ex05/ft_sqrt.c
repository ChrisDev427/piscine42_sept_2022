/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:41:58 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/29 08:11:33 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
int	ft_sqrt(int nb)
{
	long int	n;
	int			m;

	n = 1;
	m = 1;
	if (nb < 0)
		return (0);
	while (n * n <= nb)
	{
		if (n * n == nb)
			return (m);
		n++;
		m++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(81000000));
	return (0);
}*/
