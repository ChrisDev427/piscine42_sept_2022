/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:41:04 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/30 12:49:49 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_fibonacci(int index)
{
	int	i;
	long long int	a;
	long long int	b;
	long long int	tmp;

	i = 0;
	a = 1;
	b = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	while (i < index)
	{
		tmp = a + b;
		a = b;
		b = tmp;	
		i++;
		printf("Rang ->[%2d]     resultat -> %lld\n", i, b);
	}
	return (b);
}

int	main(void)
{
	ft_fibonacci(50);
	return (0);
}
