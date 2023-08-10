#include "libftprintf.h"

static int	ft_putnbr_base(unsigned long long nbr, char *base)
{
	int			printed_chars;
	unsigned long long	base_len;

	printed_chars = 0;
	base_len = ft_strlen(base);

	if (nbr >= base_len)
	{
		printed_chars += ft_putnbr_base(nbr / base_len, base);
	}
	printed_chars += ft_putchar(base[nbr % base_len]);
	
	return (printed_chars);
}

static int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

static int ft_putstr(const char *s)
{
	int	len;

	len = 0;
	while (s[len])
	{
		len += ft_putchar(s[len]);
	}
	return (len);
}

int	ft_vprintf(const char * format, va_list ap)
{
	int	printed_chars;
  va_list args;
	char	c;
	char	*s;
	int	num;
	unsigned int	num;
	void	*ptr;

	printed_chars = 0;
  va_start(args, num);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(args, int);
				printed_chars += ft_putchar(c);
			}
			else if (*format == 's')
			{
				s = va_arg(args, const char *);
				printed_chars += ft_putstr(s);
			}
			else if (*format == 'p')
			{
				ptr = va_arg(args, void *);
				printed_chars += ft_putstr("Ox");
				printed_chars += ft_putnbr_base((unsigned long long)ptr, "0123456789abcdef");
			}
			else if (*format == 'd' || *format == 'i')
			{
				num = va_arg(args, int);
				printed_chars += ft_putnbr_base(num < 0 ? - num : num, "0123456789");
				if (num < 0)
					printed_chars += ft_putchar('-');
			}
			else if (*format == 'u')
			{
				num = va_arg(args, unsigned int);
				printed_chars += ft_putnbr_base(num, "0123456789");
			}
			else if (*format == 'x')
			{
				num = va_arg(args, unsigned int);
				printed_chars += ft_putnbr_base(num, "0123456789abcdef");
			}
			else if (*format == 'X')
			{
				num = va_arg(args, unsigned int);
				printed_chars += ft_putnbr_base(num, "0123456789ABCDEF");
			}
			else if (*format == '%')
				printed_chars += ft_putchar('%');
		}
		else
		{
		printed_chars += ft_putchar(*format);
		}
		format++;
	}
  va_end(args);
	return (printed_chars);
}		



