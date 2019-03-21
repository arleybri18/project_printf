#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * printf - print characters with a format to stdout
 *
 * @format: string that contains characters to print
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	setfun functions[] = {
	//	{"c", print_char},
	{"s", print_string},
	{"i", print_int},
	{"d", print_int},
	//	{"%", print_percentage},
		{NULL, NULL}
	};
	va_list args;
	unsigned int fc, tam, count, i, oc;
	char *output, *c;
	int written_size, tp;

	if (!format)
		return(-1);

	tam = 0;
	output = malloc(sizeof(char) * 1024);
	c = malloc(sizeof(char) * 1);
	va_start(args, format);

	for (fc = 0 ; format[fc] != '\0' ; fc++)
	{
		tp = 0;
		if (format[fc] == '%')
		{
			 //aumentar uno para evaluar el siguiente
			for (count = fc + 1;  tp == 0 && format[count] != '\0'; count++)
			{
				for (i = 0 ; functions[i].type != NULL && tp == 0; i++)
				{ 	
					if (format[count] == *functions[i].type)
					{
						tp = functions[i].func("prueba", output, args);
						tam = strlen(output);
					}
					else if (format[count] == '%')
					{
						c[0] = format[fc];
						put_output(output, c);
						tp = 1;

					}
					if (tp == 1)
						fc++;
				}
			}
		}
		if (tp == 0)
		{
			c[0] = format[fc];
			put_output(output, c);

		}
	}
	va_end(args);
	tam = strlen(output);
	written_size =	write(1, output, tam);
	free(c);
	free(output);
	return (written_size);
}
