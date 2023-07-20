#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == NULL)
		return;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/*int	main()
{
	char *message = "Hello World! ";

	ft_putstr_fd(message, 1);
	ft_putstr_fd("This is a Test", 1);
	ft_putstr_fd("\n", 1);
	return (0);
}*/
