/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:52:15 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/23 11:56:53 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	*ft_rev_int_tab(int *tab, int size)
{

	int i;
	int	tmp;
	int dn;

	i = 0;
	dn = size - 1;
	while ( dn >= size / 2 )
	{
		tmp = tab[i];
		tab[i] = tab[dn];
		tab[dn] = tmp;
		i++;
		dn--;
	}


	return (tab);
}









int	main(void)
{
	int tab[6] = {1, 2, 3, 4, 5, 6};

 	int i = 0;
	ft_rev_int_tab(tab, 6);
	while (i < *tab)
	{
	printf("%d", tab[i]);
	i++;
	}
	
	
	return (0);
}
