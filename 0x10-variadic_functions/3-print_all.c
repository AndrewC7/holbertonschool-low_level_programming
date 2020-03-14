#include "variadic_functions.h"

/**
 * print_all - prints all datatypes
 *
 * @format: variable, list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, j;
	char *separator = "";

	data_t type[] = {
		{"c", _printchar},
		{"i", _printinteger},
		{"f", _printfloat},
		{"s", _printstring},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (type[j].datatype)
		{
			if (format[i] == *type[j].datatype)
			{
				printf("%s", separator);
				type[j].f(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

/**
 * _printchar - prints char
 * @args: datatype arg
 * Return: void
 */

void _printchar(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * _printinteger - prints int
 * @args: datatype arg
 * Return: void
 */

void _printinteger(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * _printfloat - prints float
 * @args: datatype arg
 * Return: void
 */

void _printfloat(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * _printstring - prints string
 * @args: datatype arg
 * Return: void
 */

void _printstring(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
