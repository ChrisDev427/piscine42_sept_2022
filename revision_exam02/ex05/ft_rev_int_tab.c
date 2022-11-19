/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:42:20 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/30 08:58:38 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	tmp = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;

	}


}

int	main(void)
{
	int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i;

	i = 0;
	while (i < 10)
	{
		printf("tab[%d] -> %d\n", i, tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, 10);
	write (1, "\n", 1);
	i = 0;
	while (i < 10)
	{
		printf("tab[%d] -> %d\n", i, tab[i]);
		i++;
	}
	return (0);
}
