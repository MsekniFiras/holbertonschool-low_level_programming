#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - returns sum of 2 numbers.
* @a: number.
* @b: number.
* Return: sum of a and b.
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - returns difference between two numbers.
* @a: number.
* @b: number.
* Return: difference of a and b.
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - returns product of two numbers.
* @a: number.
* @b: number.
* Return: product of a and b.
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - returns division of two numbers.
* @a: number.
* @b: number.
* Return: quotient of a and b.
*/
int op_div(int a, int b)
{
return (a / b);
}

/**
* op_mod - returns remainder of division of 2 numbers.
* @a: number.
* @b: number.
* Return: remainder of a divided by b.
*/
int op_mod(int a, int b)
{
return (a % b);
}
