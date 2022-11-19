/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:11:25 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/27 06:55:44 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <unistd.h>
#include <stdio.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 1;
	if (n == 0)
		return (0);
	while ((*s1 != '\0' && *s2 != '\0') && (*s1 == *s2) && (i < n))
	{
		i++;
		s1++;
		s2++;
	}
	if (*s1 - *s2 > 0)
		return (1);
	else if (*s1 - *s2 < 0)
		return (-1);
	else
		return (0);
	return (0);
}

/*
int	main(void)
{
	printf("return (%d)\n", ft_strncmp("0klio4", "0krio5", 6));
	printf("return (%d)\n", strncmp("0klio4", "0krio5", 6));
	return (0);
}*/
