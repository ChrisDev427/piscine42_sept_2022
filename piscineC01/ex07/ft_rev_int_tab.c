/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 07:32:41 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/19 15:54:49 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	dn;
	int	tmp;

	i = 0;
	dn = size - 1;
	tmp = 0;
	while (dn >= size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[dn];
		tab[dn] = tmp;
		i++;
		dn--;
	}
}
/*
int	main(void)
{	int	i;
	i = 0;
	int	array[7] = {1, 2, 3, 4, 5, 6, 7};

	while (i <= 6)
	{
		printf("array [%d] = %d\n", i, array[i]);
		i++;
	}
	i = 0;
	printf("------------------------\n");
	ft_rev_int_tab(array, 7);
	while (i <= 6)
	{
		printf("array [%d] = %d\n", i, array[i]);
		i++;
	}	
	return (0);
}*/
