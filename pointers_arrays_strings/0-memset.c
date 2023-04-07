#include "main.h"
/**
* _memset - fills memory with a constant byte.
* @s: memory area to be filled.
* @b: character to fill memory area with.
* @n: number of bytes to be filled.
* Return: pointer to the filled memory area.
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
