#include "function_pointers.h"
/**
* array_iterator - executes a function given as a parameter
*			on each element of an array.
* @array: surely not the array.
* @size: must be the size of array.
* @action: a pointer to the function.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;
while (size-- > 0)
{
action(*array);
array++;
}
}
