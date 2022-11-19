/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:26:08 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/30 11:25:09 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str<= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			return (1);
		}
		str++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	
	nb = 0;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
	
		{
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			nb = nb * 10 + (str[i] - '0');
		}

		i++;
	}

	return (nb);
}


int	main(void)
{
	char	str[] = "-   ---+ +++--123456jfri786";
	printf("%d", ft_atoi(str));
	return (0);
}
