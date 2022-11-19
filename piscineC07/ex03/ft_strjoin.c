/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:23:24 by chmassa           #+#    #+#             */
/*   Updated: 2022/10/03 16:58:01 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += ft_strlen(sep) * (size - 1);
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		i;
	char	*chaine;

	i = 0;
	total_len = ft_total_len(size, strs, sep);
	if (size == 0)
	{
		chaine = malloc (sizeof(char));
		chaine = 0;
		return (chaine);
	}
	chaine = malloc (sizeof(char) * (total_len + 1));
	*chaine = '\0';
	while (i < size)
	{
		chaine = ft_strcat(chaine, strs[i]);
		if (i != size -1)
			chaine = ft_strcat(chaine, sep);
	i++;
	}
	return (chaine);
}
/*
int	main(int argc, char **argv)
{
	char	*sep = "//";
	printf("%s",ft_strjoin(argc - 1, argv + 1, sep));
	
	return (0);
}*/
