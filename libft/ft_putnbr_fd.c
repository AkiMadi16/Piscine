#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('0' + (n % 10), fd);
	}
	else
	{
		ft_putchar_fd('0' + n, fd);
	}
}

/*int	main()
{
	int num = 5759;

	ft_putnbr_fd(num, 1);
	ft_putnbr_fd(1234, 1);
	return (0);
}*/
