#include "holberton.h"
/**
 * print_char - return a string with char received
 *
 * @type_struct: string that contain flags and type of structure
 * @args: argument to print
 *
 * Return: String with character to print
 */

int *print_char(char *type_struct, char *output, va_list args)
{
	(void)*type_struct;
	put_ouput(output, va_arg(args, char *));

	return (1);

}
