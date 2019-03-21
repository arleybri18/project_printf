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
/*
	setfun functions[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percentage},
		{NULL, NULL}
	};
*/
	va_list args;
	unsigned int fc, tam;
	char *output;
	char **string;
	int written_size;

	/*tam = strlen(format);*/
	tam = 20;
	printf("tam: %u\n", tam);
	output = malloc(sizeof(char) * tam);
	va_start(args, format);

	for (fc = 0 ; format[fc] != '\0' ; fc++)
	{
		

		/*output[fc] = format[fc];*/
		/*if (format[fc] == 'c')
		{
			printf("estoy en el if\n");
			output[fc] = (int)print_char("c", args);
		}*/


		/*output[fc] = format[fc];*/
		if (format[fc] == 's')
		{
			printf("estoy en el if string\n");
			print_string("s", args);

		}

	}
	va_end(args);
	written_size = write(1, output, 20);
	free(output);
	return (written_size);
}
