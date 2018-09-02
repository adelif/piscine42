/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 22:53:01 by rsaleh            #+#    #+#             */
/*   Updated: 2018/09/01 12:28:03 by dfelissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void rush(int x, int y)
{
	int height;

	if (x <= 0 || y <= 0)
		return ;
	height = 1;
	while (height <= y)
	{
		if (height == 1)
		{
			ft_pattern('/', '*', '\\', x);
		}
		else if (height > 1 && height < y)
		{
			ft_pattern('*', ' ', '*', x);
		}
		else if(height == y)
		{
			ft_pattern('\\', '*', '/', x);
		}
		height++;
	}
}

int		main(void)
{
	rush(5, 3);
	return (0);
}
