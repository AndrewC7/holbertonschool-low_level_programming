#include "holberton.h"
/**
 * _abs - prints absolute value of number
 *
 * @num: input to be evaluated
 *
 * Return: num
 */
int _abs(int num)
{
	if (num < 0)
		num = num * -1;
	return (num);
}
