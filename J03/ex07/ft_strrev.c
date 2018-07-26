#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	temp;

	i = 0;
	j = 0;
	while(str[i] != '\0')
		i++;
	i--;
	while (j < i)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j++;
		i--;
	}
	return (str);
}

int	main()
{
	char str[] = "Bonjour Daphenie !";

	printf("%s", ft_strrev(str));
	return (0);
}
