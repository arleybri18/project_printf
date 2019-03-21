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
	int written_size;

	tam = strlen(format);
	printf("tam: %u\n", tam);
	output = malloc(sizeof(char) * tam);
	va_start(args, format);
	for (fc = 0 ; format[fc] != '\0' ; fc++)
	{
		output[fc] = format[fc];
	}
	written_size =	write(1, output, tam);
	free(output);
	return (written_size);
}
