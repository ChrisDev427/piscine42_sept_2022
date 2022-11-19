/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_first_letter.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 07:12:48 by chmassa           #+#    #+#             */
/*   Updated: 2022/09/30 07:24:22 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>




int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i;

		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'c')
			{
				write (1, "c", 1);
				break ;
			i++;
			}
			else 
				i++;
		}
		write (1, "\n", 1);
	}
	else
		write (1, "c\n", 2);
	return (0);
}
