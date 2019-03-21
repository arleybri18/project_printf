#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
 * print_string - return a string with string received
 *
 * @type_struct: string that contain flags and type of structure
 * @args: argument to print
 *
 * Return: String to print
 */

int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;
	char *string;
	char *output;
	int final_len;
	
	output = malloc(sizeof(*format));

	va_start(args, format);
	
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{	i++;
			if (format [i] == 's')
			{ 
				string = print_string("c", args);
				
				/*output = (char *) realloc(output, strlen(format)+strlen(string)+2);*/
				output = (char *) realloc(output, 50);
			/*	printf("%s\n", output);
				printf("%s\n", string);
			*/	
				strcat(output, string);
				i++;
			}
		}

		output[i] = format[i];
	}

	final_len = strlen(output);
	write (1, output, final_len);
	return (0);

}

char *print_string(char *type_struct, va_list args)
{ 
	(void)*type_struct;

	return (va_arg(args, char *));

}
/*

char *print_string(char *type_struct, va_list args)
{
	char *str;
	int lenght;

	(void)*type_struct;

	str = va_arg(args, char *);
	lenght = strlen(str);
	printf("%d\n", lenght);
	return (str);


}
 */


int main()
{
	_printf("Hola %s\n","printf");
	return (0);

}
