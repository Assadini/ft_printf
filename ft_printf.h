#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_flags
{
	char	space;
	char	hash;
	char	plus;
}			t_flags;

int			ft_putchar(char c);
int			ft_putstr(char *s);
int			ft_putnbr_add(void *n);
int			ft_putnbr(int n);
int			ft_putnbr_unsigned(unsigned int n);
int			ft_putnbr_hupp(unsigned int n);
int			ft_putnbr_hlow(unsigned int n);
int			ft_printf(const char *s, ...);

#endif