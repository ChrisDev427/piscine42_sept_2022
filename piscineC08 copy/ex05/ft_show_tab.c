/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:04:42 by chmassa           #+#    #+#             */
/*   Updated: 2022/10/05 08:45:23 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

char	*ft_strdup(char *str) ///////
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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av) ////////
{
	t_stock_str	*s_tab;
	int			i;

	i = 0;
	s_tab = malloc (sizeof(t_stock_str) * (ac + 1));
	if (s_tab == 0)
		return (0);
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

void	ft_putnbr(int nb)
{
	char	c;

	c = 0;
	if (nb >= 0 && nb <= 9)
		c = nb + '0';
		write (1, &c, 1);
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		c = nb % 10 + '0';
		write (1, &c, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		write (1, "\n", 1);
		ft_putstr(par[i].copy);
		i++;
	}
}
/*
int	main(void)/////
{
	char	*str[3];
	t_stock_str *view;
	str[0] = "AAAaaaaaaaaaa";
	str[1] = "BBBtttttttttttttt";
	str[2] = "CCC,juhyhyhretbtyhuetujetujetujr";
	view = ft_strs_to_tab(3, str);
	ft_show_tab(view);

	return (0);
}
*/

int	main(int argc, char **argv)////////
{
	char		**str;
	t_stock_str	*view;

	view = ft_strs_to_tab(argc - 1, argv + 1);
	ft_show_tab(view);
	return (0);
}
