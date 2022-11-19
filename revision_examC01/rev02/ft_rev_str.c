/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:01:18 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/23 10:51:38 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_str_len(char *str)
{	
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}
char 	*ft_rev_str(char *str)
{
	int	i;
	int j;
	char tmp;
	i = 0;
	

	j = ft_str_len(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;

			
		i++;
		j--;
	}
	return (str);

}

int	main(void)
{	
	char str[] = "ABCDEFGH";
	printf("%s\n", str);
	ft_rev_str(str);
	printf("%s\n", str);
	return (0);
}
