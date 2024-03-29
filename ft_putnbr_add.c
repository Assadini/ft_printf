#include "ft_printf.h"
#include <string.h>

int	ft_putnbr_ha(unsigned long n)
{
	int	len;

	len = 0;
	if (n >= 0 && n <= 9)
	{
		len += ft_putchar(n + 48);
	}
	else if (n >= 10 && n < 16)
	{
		len += ft_putchar(n + 87);
	}
	else
	{
		len += ft_putnbr_ha(n / 16);
		len += ft_putnbr_ha(n % 16);
	}
	return (len);
}

int	ft_putnbr_add(void *n)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	len += ft_putnbr_ha((unsigned long)n);
	return (len);
}