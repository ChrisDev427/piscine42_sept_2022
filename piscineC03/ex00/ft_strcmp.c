/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 06:44:46 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/27 06:34:41 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <string.h>
#include <unistd.h>
#include <stdio.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 - *s2 > 0)
		return (1);
	if (*s1 - *s2 < 0)
		return (-1);
	return (0);
}
/*
int	main(void)
{	
	printf("return (%d)\n", ft_strcmp("ab58ghj", "ab5ghj"));
	printf("return (%d)\n", strcmp("ab58ghj", "ab5ghj"));
	return (0);
}*/
