#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - function
  * @a: number to be added
  * @b: numbre to be added
  *
  * Return: sum of the numbers
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - function
  * @a: numer to minus
  * @b: number to minus
  *
  * Return: (a-b)
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function that multiplies
  * @a: number to multiply
  * @b: number to multiply
  *
  * Return: multiplication answer
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - function to divide
  * @a: number2
  * @b: number1
  *
  * Return: answer
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - function 
  * @a: number2
  * @b: number1
  *
  * Return: answer
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
