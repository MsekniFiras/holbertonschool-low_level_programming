#include <stdio.h>
#include <stdlib.h>
/**
* main - prints multiplication of two argument numbers.
* @argc: number of arguments.
* @argv: an array of pointers.
* Return: 0 if 2 arguments received, else 1.
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
