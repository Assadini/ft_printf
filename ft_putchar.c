#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	len;

	len = 1;
	write(1, &c, 1);
	return (len);
}