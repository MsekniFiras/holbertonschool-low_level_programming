#include "main.h"
/**
* clear_bit - sets value of a bit at given index to 0.
* @n: poiter to bit.
* @index: index to set value at.
* Return: -1 on error, otherwise 1.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n &= ~(1 << index);
return (1);
}
