#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    printComb(char a, char b, char c)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
    ft_putchar(',');
    ft_putchar(' ');
}

void    printLastComb(char a, char b, char c)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
    ft_putchar('\n');
}

void    ft_print_comb()
{
    char a;
    char b;
    char c;

    a = '0';
    b = '1';
    c = '2';
    while (a <= '7')
    {
        while (b <= '8')
        {
            while (c <= '9')
            {
                if (a == '7' && b == '8' && c == '9')
                    printLastComb(a, b, c);
                else
                    printComb(a, b, c);
                c++;
            }
            b++;
            c = b + 1;
        }
        a++;
        b = a + 1;
        c = b + 1;
    }
}

int     main()
{
    ft_print_comb();
    return (0);
}



