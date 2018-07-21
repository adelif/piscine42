#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	printf("%d\n", *div);
	*mod = a % b;
	printf("%d\n", *mod);
}

int	main()
{
	int div[0];
	int mod[0];

	ft_div_mod(59, 5, div, mod);
	return (0);
}
