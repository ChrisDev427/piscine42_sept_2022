/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:25:03 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/26 13:59:45 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_num(char	*str)
{
	while (*str != '\0')
	{
		if (*str >='0' && *str <= '9')	
			str++;
		else
			return (0);
	}
	return (1);
}


int	ft_atoi(char *str)
{
	int ret;
	int i;
	int neg;
	int j;
	char nbr[] = "";
	
	i = 0;
	neg = 0;
	j = 0;
	while (str[i] == ' ' || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			neg++;
		}
		
		i++;
	}
	printf("i = %d\nneg = %d\n", i, neg);
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr[j] = str[i];


		i++;
	}
	//  nbr += *str - '0';
         
	
	printf("i = %d\nneg = %d\nnbr = %s", i, neg, nbr);

	return(neg);
}

int	main()
{
	char	str[] = " ---+--+1234ab567";
	ft_atoi(str);
	return (0);
}
