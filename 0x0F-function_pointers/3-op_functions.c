#include "3-calc.h"
/**
* op_add- add two integers
* @a: integer a
* @b: integer b
*
* Description: this function adds two integers
* Return: the result of the operation
*/
int op_add(int a, int b)
{
	int calc;

	calc = a + b;
	return (calc);
}
/**
* op_sub- difference between two integers
* @a: integer a
* @b: integer b
*
* Description: this function calculates the difference between two integers
* Return: the result of the operation
*/
int op_sub(int a, int b)
{
	int calc;

	calc = a - b;
	return (calc);
}
/**
* op_mul- product between two integers
* @a: integer a
* @b: integer b
*
* Description: this function calculates the product between two integers
* Return: the result of the operation
*/
int op_mul(int a, int b)
{
	int calc;

	calc = a * b;
	return (calc);
}
/**
* op_div- division between two integers
* @a: integer a
* @b: integer b
*
* Description: this function calculates the division between two integers
* Return: the result of the operation
*/
int op_div(int a, int b)
{
	int calc;

	calc = a / b;
	return (calc);
}
/**
* op_mod- remainder of the division between two integers
* @a: integer a
* @b: integer b
*
* Description: this function gets the remainder of a division
* Return: the result of the operation
*/
int op_mod(int a, int b)
{
	int calc;

	calc = a % b;
	return (calc);
}
