#include "function_pointers.h"
/**
* int_index - searches for an integer.
* @array: array of integers.
* @size: size of the array.
* @cmp: a pointer to the function to be used to compare values.
* Return: -1 if no match otherwise the index of the first element.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
