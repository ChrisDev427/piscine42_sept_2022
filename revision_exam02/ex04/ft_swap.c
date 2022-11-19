/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:35:49 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/30 08:40:56 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}


int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 500;

	ft_swap_int(&a, &b);
	printf("a = %d\nb = %d\n", a, b);
	return (0);
}
