#include "main.h"
/**
*_strcpy - copies a pointed to string.
*@dest: a buffer.
*@src: source string
*Return: a pointer to the destination.
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
return (dest);
}
