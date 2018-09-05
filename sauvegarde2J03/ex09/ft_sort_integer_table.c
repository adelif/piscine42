#include <stdio.h>
#include <stdlib.h>

void		ft_sort_integer_table(int *table, int size)
{
	int i;
	int tmp;

	i = 0;
	while (i < size)
	{
		if (table[i] > table[i + 1])
		{
			tmp = table[i + 1];
			table[i + 1] = table[i];
			table[i] = tmp;
			i = 0;
		}
		else
			i++;
	}
	i = 0;
	while (i <= size)
	{
		printf("%d", table[i]);
		printf(" ");
		i++;
	}
}

int			main(int ac, char *av[])
{
	int i;
	int j;
	int k;

	i = atoi(av[1]);
	int table[i];
	j = 0;
	k = 2;
	while (j <= i)
	{
		table[j] = atoi(av[k]);
		j++;
		k++;
	}
	ft_sort_integer_table(table, i);
	return (0);
}
