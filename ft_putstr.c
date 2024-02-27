#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
    while(s[len])
	{
        ft_putchar(s[len]);
        len++;
    }
	return (len);
}