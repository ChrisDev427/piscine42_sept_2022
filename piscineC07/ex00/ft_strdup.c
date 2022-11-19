/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:28:28 by chmassa           #+#    #+#             */
/*   Updated: 2022/10/02 19:33:38 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = NULL;
	cpy = malloc(sizeof(char) * ft_strlen(src + 1));
	if (cpy == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*
int	main(void)
{
	char	str[] = "Bonjour 42 !!!hhjkhkjhjkhkjhkjhjkhkhjkhjkhkjhjkhjkhjkhkjh";
	char	*test;

	test = ft_strdup(str);
	printf("%s", test);
	return (0);
}*/
