#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



int	ft_atoi(char *str)
{
	int	nb;
	int	i;
	int	sign;

	i = 0;
	nb = 0;
	sign = 0;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '-' || str[i] == '+')
			|| (str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
	{
		i++;
		if (str[i] == '-')
			sign++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if (sign % 2 == 1)
		write (1, "-", 1);
	return (nb);
}

int	main(void)
{
	printf("%d ft_atoi\n", ft_atoi("  \f  \r		 \n  		--+--+12347891  	a12b567"));
	printf("%d atoi\n", atoi("  \n	\f \r	 12347891a  	12b567"));

	return (0);
}
