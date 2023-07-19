#include "function_pointers.h"
/**
 *array_iterator - a function that executes a function given as a parameter
 *on each element of an array
 *@array: points to the array
 *@size: The size of the array
 *@action: a pointer that points to a given function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
