/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:28:20 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/20 17:01:36 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*
void	ft_view_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i != size)
	{
		printf("[%d]", tab[i]);
		i++;
	}
	printf("\n");
}
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp1;

	tmp1 = 0;
	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp1 = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp1;
				j++;
			}
			else
			j++;
		}
			i++;
			j = i + 1;
	}
}
/*
int	main(void)
{
	int tab[15] = {303, -60, 200000, 0, 40, -8, 10, 90, 5, 7, 87, 1235, 4, 9, 9};

	ft_view_tab(tab, 15);
	ft_sort_int_tab(tab, 15);
	ft_view_tab(tab, 15);
	return (0);
}*/
