#include <stddef.h>

/**
 * print_name - function to print name
 *
 * @size:size of array
 * @action:pointer to function
 * @array: array to iterate
 *
 * Return: Empty if NULL
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
