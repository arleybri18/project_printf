#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - create a new array
 *
 *@ptr: universal pointer
 *@old_size: before size
 *@new_size: after size
 * Return: pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *res;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));
	p = ptr;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	res = malloc(new_size);
	if (res == NULL)
		return (NULL);

	for (i = 0 ;  p[i] != '\0' || i < new_size; i++)
	{
		res[i] = p[i];
	}
	free(ptr);
	return (res);
}
