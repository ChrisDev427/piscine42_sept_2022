/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:18:37 by chmassa           #+#    #+#             */
/*   Updated: 2022/10/03 14:27:33 by chmassa          ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else if (*range == NULL)
		return (-1);
	else
		return (max - min);
}
/*
int	main(void)
{
	int	*tab;
	int	min;
	int	max;

	min = -6;
	max = 11;	
	printf("%d\n", ft_ultimate_range(&tab, min, max));

	int	i;

	i = 0;
	while (i < max - min)
	{
		printf("tab [%d] -> %d\n", i, tab[i]);
		i++;
	}
	return (0);
}*/
