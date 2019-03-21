#ifndef PRINTF
#define PRINTF
#include <stdarg.h>
#include <stdlib.h>

char *print_char(char *, va_list);
char *print_string(char *, va_list);
/**
 * struct setting_function - Struct operators
 *
 * @type: format type to print
 * @func: The function associated to print
 */
typedef struct setting_function
{
	char *type;
	char *(*func)(char *type_struct, va_list args);
} setfun;

int _printf(const char *format, ...);

#endif
