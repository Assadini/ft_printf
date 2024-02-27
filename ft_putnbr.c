#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	len;
	int	nb;

	len = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		len += 11;
	}
	else if (n < 0)
	{
		nb = -n;
		len += ft_putchar('-');
		len += ft_putnbr(nb);
	}
	else
	{
		if (n > 9)
			len += ft_putnbr(n / 10);
		len += ft_putchar(n % 10 + 48);
	}
	return (len);
}