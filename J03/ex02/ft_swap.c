#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp1;
	int tmp2;

	tmp1 = *a;
	tmp2 = *b;
	*a = tmp2;
	*b = tmp1;
	printf("%d\n", *a);
	printf("%d", *b);
}

int	main()
{
	int a[0];
	int b[0];

	a[0] = 2;
	b[0] = 4;
	ft_swap(a, b);
	return (0);
}
