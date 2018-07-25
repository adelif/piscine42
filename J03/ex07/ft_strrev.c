#include <stdio.h>
#include <unistd.h>

char	*ft_strrev(char *str)
{
	char *str;
	int i;
	
	i = 0;
	*str = str[0];

	while(*str != '\n')
	{
		*str++;
		i++;
	}

//première étape  : parcourrir toute la str
//deuxième étape  : stoquer char par char la str à l'envèrs
//Bonne chance !
}

void	ft_putchar(char *str)
{
	write(1, &c, 1);
}

char	*ft_strrev(char *str)
{
	char *str;
	str = "bonjour";
	ft_putchar(str[0]);
	ft_putchar(str[1]);
	ft_putchar(str[2]);
	ft_putchar(str[3]);
	ft_putchar(str[4]);
	ft_putchar(str[5]);
	ft_putchar(str[6]);
	ft_putchar('\n');
	return (*str);
}
