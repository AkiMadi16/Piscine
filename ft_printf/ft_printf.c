#include "libftprintf.h"

// Initialization function: start/end variadic arguments functions <stdargs.h>
// in between that, goes through the input string printing plain characters or collecting + treating format specifiers to the FORMAT SPECIFIER STRUCT thus printing each occurance with the corresponding function.

int	ft_printf(const char *format, ...)
{
	va_list args;
	int	printed_chars;

	va_start(args, format);
	printed_chars = ft_vprintf(format, args);
	va_end(args);

	return (printed_chars);  
}

