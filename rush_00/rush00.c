/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraynaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 09:27:00 by jraynaud          #+#    #+#             */
/*   Updated: 2022/09/18 15:25:43 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_printline(char a, char b, char c, int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar(a);
		}
		if (i > 1 && i < x)
		{
			ft_putchar(b);
		}
		if (i == x && i > 1)
		{
			ft_putchar(c);
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	cntl;

	cntl = 1;
	if (x > 0 && y > 0)
	{
		ft_printline('A', 'B', 'C', x);
		cntl++;
		while (cntl < y)
		{
			ft_printline('B', ' ', 'B', x);
			cntl++;
		}
		if (y > 1)
		{
			ft_printline('C', 'B', 'A', x);
		}
	}
}
