/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraynaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:01:04 by jraynaud          #+#    #+#             */
/*   Updated: 2022/09/19 06:43:19 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "rush00.c"
#include "ft_putchar.c"
void	ft_putchar(char c);
void	ft_printline(char a, char b, char c, int i);
void	rush(int x, int y);

int	main(void)
{
	rush(5, 10);
	return (0);
}
