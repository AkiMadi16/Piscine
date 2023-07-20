#include "libft.h"

void	modify_character(unsigned int index, char *c)
{
	 *c = 'A' + index;
}

void	ft_striteri(char *s, void(*f)(unsigned int, char*))
{
	if(s == NULL || f == NULL)
		return;

	unsigned	int	index;
	
	index = 0;
	while (*s == '\0')
	{
		f(index, s);
		s++;
		index++;
	}
}

int	main()
{
	char str[] = "Hello world!";
	printf("Original String: %s\n", str);

	ft_striteri(str, modify_character);
	printf("Modified String: %s\n", str);
	return (0);
}
