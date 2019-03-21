#ifndef PRINTF
#define PRINTF
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int put_output(char *output, char *string);
int print_char(char *type_struct, char *output, va_list args);
int print_string(char *type_struct, char *output, va_list args);
int print_int(char *type_struct, char *output, va_list args);
/**
 * struct setting_function - Struct operators
 *
 * @type: format type to print
 * @func: The function associated to print
 */
typedef struct setting_function
{
	char *type;
	int (*func)(char *type_struct, char* output, va_list args);
} setfun;

#endif
