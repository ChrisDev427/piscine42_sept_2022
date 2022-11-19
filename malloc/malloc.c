/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:04:26 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/29 19:55:20 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_view_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("Case [%d]  Valeur -> %d\n", i, tab[i]);
		i++;
	}
}

void	ft_view_tab_tab_malloc(int **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i] < 4)
	{
		while (tab[j] < 5)
		{
			printf("Case [%d][%d]  Valeur -> %d\n", i, j, *tab);
			j++;
		}
		i++;
	}
}

int	*ft_tab_malloc()
{
	int	*var;

	var = malloc(sizeof(int) * 50);

		int	i;

		i = 0;
		while (var[i] < 50)
		{
			var[i] = i * 3;

			i++;
		}
			free (var);

		ft_view_tab(var, 50);
	return (0);
}

int	*ft_tab_tab_malloc()
{
	int	i;
	int	j;
	int	**var;
	
	i = 0;
	j = 0;
	var = malloc(sizeof(int*) * 4);
	while (i < 4)
	{
		var[i] = malloc(sizeof(int) * 5);
		while ( j < 5)
		{
			tab[i][j] = i * j * 9;
			j++;
		}
		i++;
	}
	ft_view_tab_tab_malloc(**var);

	return (0);
}


int	main(void)
{
	ft_tab_tab_malloc();



	return (0);
}
