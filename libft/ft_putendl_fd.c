#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == NULL)
		return;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	
	char newline = '\n';
	write(fd, &newline, 1);
}

/*int	main()
{
	char *message = "Hello World ";

	ft_putendl_fd(message, 1);
	ft_putendl_fd("This is a test!", 1);
	return (0);
}*/
	
