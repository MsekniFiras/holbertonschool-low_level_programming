#include "main.h"
/**
*puts2 - prints every other character of the string starting with the first
*	character followed by a newline.
*@str: string.
*/
void puts2(char *str)
{
int i = 0, l = 0;
while (str[i++])
l++;
for (i = 0; i < l; i += 2)
_putchar(str[i]);
_putchar('\n');
}
