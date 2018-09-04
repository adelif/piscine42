#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *a / *b;
	printf("%d\n", *a);
	*b = temp % *b;
	printf("%d", *b);
}

int	main()
{
	int a[0];
	int b[0];

	*a = 20;
	*b = 10;
	ft_ultimate_div_mod(a, b);
	return (0);
}
