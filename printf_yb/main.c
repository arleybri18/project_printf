#include "holberton.h"
#include <stdio.h>

int main()
{
int len, len2;
	/*_printf("Let's try to printf a simple sentence.%s with strngs %s new string\n", "Holberton", "School");
*/

	len = _printf("Let's try to printf a simple sentence.\n");
    	len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
_printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");


}
