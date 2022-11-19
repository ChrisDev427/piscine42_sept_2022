/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 06:58:21 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/19 07:27:54 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	*chaine;
	char	c;
	int		taille_chaine;

	chaine = "Bonjour";
	c = '0';
	taille_chaine = 0;
	taille_chaine = ft_strlen(chaine);
	c = taille_chaine / 10 + '0';
	write (1, &c, 1);
	c = taille_chaine % 10 + '0';
	write (1, &c, 1);
	return (0);
}*/
