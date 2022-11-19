/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 06:59:18 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/23 12:42:52 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_len(char *str)
{	
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_sort_str(char *str)
{	
	int	i;
	int	j;
	char tmp;

	i = 0;
	j = 1;

	while (str[i] != '\0')
	{
		while (str [j] != '\0')
		{	
			if (str[i] > str[j])
			{	
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
				j++;
			}
			else
				j++;
		}
		i++;
		j = i + 1;
	}
	

	return (str);
}
/*
int	main(int argc, char **argv)
{
	char	str[] = "qwertyuiopasdfghjklzxcvbnm";
	printf ("%s\n", str);
	ft_sort_str(str);
	printf ("%s\n", str);
	return (0);
}
*/

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
	printf("%s\n", ft_sort_str(argv[1]));
	}
	return (0);
}
