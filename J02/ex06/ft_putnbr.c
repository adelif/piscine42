void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < –2147483648 || nb > 2147483647)
		return;
	else if (nb < -9 || nb > 9)
		ft_putnbr(nb / 10);
	else if (nb < 0)
	{
		if (nb >= -9 && nb <= 9)
			ft_putchar('-');
		ft_putchar('0' - (nb % 10));
	}
	else
		ft_putchar('0' + (nb % 10));
}

int		main(void)
{
	ft_putnbr(93270);
	ft_putchar('\n');
	ft_putnbr(-77400);
	ft_putchar('\n');
	ft_putnbr(0);
}
