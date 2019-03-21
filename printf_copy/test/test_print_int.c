#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>


char *convert_num(int number);

char *print_int(char *type_struct, va_list args);
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

	va_start(args, format);

	if (format[i] == 'i')
	{
		string = print_int("i", args);
		printf("%s\n", string);
	
	}

	return (0);

}


char *print_int(char *type_struct, va_list args)
{
	char *num_string;

	(void)*type_struct;

	num_string = convert_num(va_arg(args, int));

	return (num_string);


}


char *convert_num(int n)
{
	char *arr_number;
	int cont = 1, pot = 1;
	unsigned int r, count, num;
        
        /*pendiente saber como determinar el tamaño del bufer*/
	arr_number = malloc(sizeof(char) * 20);

	count = 0;
	while (count < sizeof(arr_number))
	{

		if (n < 0)
		{
			arr_number[count] = '-';
			n = n * -1;
			count++;
		}
		num = n;

		while (n / 10 > 0)
		{
			n = n / 10;
			cont++;
			pot = pot * 10;
		}
		while (cont >= 1)
		{
			if (cont == 1)
				r = num % 10;
			else
			{
				r = num / pot;
				r = r % 10;
			}
			arr_number[count] = (r + '0');
			pot = pot / 10;
			cont--;
			count++;
		}
	count++;
	}
	arr_number [count] = '\0';

	return (arr_number);
}
	

int main()
{
	_printf("i",-12456);
	_printf("i", -762534);
	return (0);

}
