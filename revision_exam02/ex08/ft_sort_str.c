/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:12:17 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/30 10:23:33 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_sort_str(char *str)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		while (str[j] != '\0')
		{
			if (str[j] < str[i])
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


int	main(int argc, char **argv)
{
	if (argc == 2)
	{
	char *str = argv[1];

	ft_sort_str(str);
	printf("%s\n", str);
	}
	return (0);
}
