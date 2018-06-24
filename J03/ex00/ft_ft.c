#include <unistd.h>
#include <stdio.h>

void		ft_ft(int *nbr)
{
	*nbr = 42;
	printf("adresse de &*nbr -> %p\n", &*nbr);
	printf("adresse de &nbr -> %p\n", &nbr);
	printf("valeur de l'int dans *nbr -> %d\n", *nbr);
}

int			main()
{
	int nbr[10];

	ft_ft(nbr);
	return (0);
}
