#include "holberton.h"
#include <stdio.h>
/**
 * print_string - return a string with string received
 *
 * @type_struct: string that contain flags and type of structure
 * @args: argument to print
 *
 * Return: String to print
 */

char *print_int(char *type_struct, va_list args)
{
	int i, number = 0;

	for (i = 0; type_struct[i] != '\0'; i++)
	{
		number = va_arg(args, int);
		printf("%d", number);
	}
	return ("H");
}
