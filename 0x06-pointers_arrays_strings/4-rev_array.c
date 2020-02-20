#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - reverses content of array
 *
 * @a: array
 * @n: number of elements in array
 *
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int front;
	int temp;

	for (front = 0; n > front; n--)
	{
		temp = a[n - 1];
		a[n - 1] = a[front];
		a[front] = temp;
		front++;
	}
}
