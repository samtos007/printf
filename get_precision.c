#include "main.h"

/**
 * get_precision - solve the printing  precision
 * @format: Format for  string  to print the arguments
 * @i: List of arguments
 * @list: list of arguments.
  * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int current = *i + 1;
	int precision = -1;

	if (format[current] != '.')
		return (precision);

	precision = 0;

	for (current += 1; format[current] != '\0'; current++)
	{
		if (is_digit(format[current]))
		{
			precision *= 10;
			precision += format[current] - '0';
		}
		else if (format[current] == '*')
		i{
current++;
precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i =  current - 1;

	return (precision);
}
