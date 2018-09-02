/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 23:55:59 by rsaleh            #+#    #+#             */
/*   Updated: 2018/09/01 13:21:48 by dfelissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_pattern(char start, char mid, char end, int length)
{
	ft_putchar(start);
	while(length > 2)
	{
		ft_putchar(mid);
		length--;
	}
	if(length > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int height;

//if (x > 21432453 || y > 2541351351)
//		return;
if (x <= 0 || y <= 0)
		return ;
	height = 1;
	while (height <= y)
	{
		if (height == 1 || height == y)
		{
			ft_pattern('o', '-', 'o', x);
		}
		else if (height > 1 && height < y)
		{
			ft_pattern('|', ' ', '|', x);
		}
		height++;
	}
}

int		main(int ac, char **av)
{
	int x;
	int y;

	x = atoi(av[1]);
	y = atoi(av[2]);
	rush(x, y);
	return (0);
}
