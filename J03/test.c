#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	daf(void)
{
	char *str;
	char x;

	x = '!';
	str = "abcde";
	printf("adresse de a --> %p\n", &str[0]);
	printf("adresse de *str --> %p\n", &*str);
	printf("je marque ce que je veux %c\n", x);
}

int		main()
{
	daf();
	return (0);
}
