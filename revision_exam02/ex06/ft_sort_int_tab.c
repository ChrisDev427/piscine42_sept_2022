/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:59:50 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/30 09:18:08 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 1;
	tmp =0;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
				j++;
			}
			else
				j++;
		}
		i++;
		j = i + 1;
	}

}

int	main(void)
{
	int	tab[10] = {12, 289, 0, 78, 8945, 1, 9, 45, 123, 74962};
	
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");

	ft_sort_int_tab(tab, 10);

	while (j < 10)
	{
		printf("%d ", tab[j]);
		j++;
	}



	return (0);
}
