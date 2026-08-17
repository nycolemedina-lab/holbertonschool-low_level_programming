#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_char - prints a character
* @arg: va_list containing character to print
*/
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
* print_int - prints an integers
* @arg: va_list containing integers to print
*/
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
* print_float - print a float
* @arg: va_list containing float to print
*/
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
* print_string - prints a string or (nil) if NULL
* @arg: va_list containing string to print
*/
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
* print_all - prints anything based on format specifiers
* @format: list of types of arguments passed to function
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *sep = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (funcs[j].symbol)
		{
			if (format[i] == funcs[j].symbol[0])
			{
				printf("%s", sep);
				funcs[j].print(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}


