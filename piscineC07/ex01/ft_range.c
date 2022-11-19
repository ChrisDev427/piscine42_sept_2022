/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:22:47 by chmassa           #+#    #+#             */
/*   Updated: 2022/10/02 19:42:48 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	y;

	i = 0;
	y = max - min;
	tab = malloc (sizeof (int) * y);
	if (tab == NULL)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	*tab;
	int	min;
	int	max;

	min = 150;
	max = 200;

	tab = ft_range(min, max);

	int	i;

	i = 0;
	while (i < max - min)
	{
		printf("tab = [%d] = %d\n", i,  tab[i]);
		i++;
	}	
	return (0);
}*/
