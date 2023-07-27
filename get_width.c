#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Format string  which prints the arguments.
 * @i: List of arguments been printed.
 * @list: list of arguments
 *Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int curr;
	int width = 0;

	for (curr = *i + 1; format[curr] != '\0'; curr++)
	{
		if (is_digit(format[curr]))
		{
			width *= 10;
			width += format[curr] - '0';
		}
		else if (format[curr] == '*')
		{
			curr++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr - 1;

	return (width);
}
