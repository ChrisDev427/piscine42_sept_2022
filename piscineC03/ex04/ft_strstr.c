


/*    ft_strstr
 *    9 octobre 2022
 */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;

	return (i);
}


 char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int len_to_find;

	len_to_find = ft_strlen(to_find);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			i++;
			j++;
		}
		if (j == len_to_find)
			return (str + (i - len_to_find));
	i++;
	}
	return (NULL);
}

int	main(void)
{
	char	*str = "Bonjour tout le monde !!!";
	printf("%s\n", ft_strstr(str, "mo"));
	printf("%s\n", strstr(str, "mo"));



	return (0);
}

