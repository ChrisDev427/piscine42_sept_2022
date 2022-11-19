/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:59:39 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/23 12:06:45 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	*ft_sort_int_tab(int *tab, int size)
{

	int i;
	int j;
	int	tmp;

	i = 0;
	j = 1;
	
	while (tab[i] != size)
	{
		while (tab[j] != size)
		{
			if (tab[i] 

		}

	
	}


	return (tab);
}









int	main(void)
{
	int tab[6] = {6, 2, 5, 4, 3, 1};

 	int i = 0;
	ft_sort_int_tab(tab, 6);
	while (i < *tab)
	{
	printf("%d", tab[i]);
	i++;
	}


	return (0);
}
