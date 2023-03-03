#include "main.h"

/**
*times_table - prints the 9 times table starting with 0.
*/

void times_table(void)

{

int i, n, r = 0;
for (i = 0; i <= 9; i++)
{
	for (n = 1; n <= 9; n++)
	{
		r = i * n;
		if (r <= 9)
		{
			_putchar(r + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(r / 10 + '0');
			_putchar(r % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
}
