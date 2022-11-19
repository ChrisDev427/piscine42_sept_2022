/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc_argv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:17:06 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/29 15:50:17 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
		
			write (1, &argv[i][j], 1);
			j++;
		}
		write (1 , "\n", 1);
		i++;
		j = 0;
	}


//	printf("Nb arguments : %d\n", argc);
//	printf("Valeur argument : %s\n", argv[1]);
		

	return (0);
}
