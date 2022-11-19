/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:08:00 by chmassa           #+#    #+#             */
/*   Updated: 2022/10/05 08:45:50 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (cpy == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*s_tab;
	int			i;

	i = 0;
	s_tab = malloc (sizeof(t_stock_str) * (ac + 1));
	if (s_tab == 0)
		return (NULL);
	while (i < ac)
	{
		s_tab[i].str = av[i];
		s_tab[i].size = ft_strlen(av[i]);
		s_tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	s_tab[ac].str = 0;
	return (s_tab);
}
/*
int	main(void)
{
	char	*str[3];
	t_stock_str *view;

	str[0] = "AAAAAAA";
	str[1] = "BBBBBBBBB";
	str[2] = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
	view = ft_strs_to_tab(3, str);
	int i = 0;
	while (i < 3)
	{
		printf("%s\n%d\n%s\n", view[i].str, view[i].size, view[i].copy);
		i++;
	}
	return (0);
}*/
