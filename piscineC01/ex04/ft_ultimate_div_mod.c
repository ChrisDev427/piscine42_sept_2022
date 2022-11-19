/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:30:26 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/19 16:01:47 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a /= *b;
	*b = tmp % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 144;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	return (0);
}*/
