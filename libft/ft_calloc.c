#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	array = (void *)malloc(count * size);
	if (array == NULL)
		return (NULL);
	ft_memset(array, 0, size * count);
	return (array);
}

/*int	main()
{
	size_t elements = 5;
	size_t element_size = sizeof(int);

	int *array = ft_calloc(elements, element_size);

	if (array)
	{
		printf("Memory successfully allocated and initiated to 0: \n");
		size_t i = 0;
		while (i < elements)
		{
			printf("array %zu : %d\n", i, array[i]);
			i++;
		}
		free(array);
	}
	else
	{
		printf("Memory allocation failed!\n");
	}
	return (0);
}*/
