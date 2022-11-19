/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testModulo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:00:59 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/18 13:02:06 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_trans_int(int a)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_trans_int(a);
			write (1, " ", 1);
			ft_trans_int(b);
			if (a != 98)
				write (1, ", ", 2);
			b++;
		}
		a++;
		b = a + 2;
	}
}
/*
int	main(void)
{	
	ft_print_comb2();
	return (0);
}*/
