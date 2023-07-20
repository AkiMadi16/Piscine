#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main()
{
	char ch = 'A';

	ft_putchar_fd(ch, 1);
	ft_putchar_fd('B', 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
