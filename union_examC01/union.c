#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char	*str1, char	*str2, char	 *strdest)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str1[i] != '\0')
	{
		strdest[j] = str1[i];
		i++;
		j++;
	}
	i = 0;
	while (str2[i] != '\0')
	{
		strdest[j] = str2[i];
		i++;
		j++;
	}
	strdest[j] = '\0';
	return (strdest);
}

int	ft_strlen(char	*str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
char	*ft_rem_dbl(char *str)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 1;
	len = ft_strlen(str);
	
	while (i < len)
	{
		while (j < len)
		{
			if (str[j] == ' ')
				j++;
			if (str[j] == str[i])
				str[j] = ' ';
			else
				j++;
		}
		i++;
		j = i + 1;
	}
	return (str);
}
void	ft_print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			write (1, &str[i], 1);
		}
		i++;
	}
			write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		return (0);
	}
	char strcat[100];

	ft_strncat(argv[1], argv[2], strcat);
	ft_rem_dbl(strcat);
	ft_print_str(strcat);
	return (0);
}
