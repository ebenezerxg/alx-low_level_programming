#include "main.h"

/**
 * print_last_digit - Print thelast digit of a number
 * @n: The numbe to be the treated
 * Return: value of the last digit of number
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last* -1;
	}
	_putchar(last + 'a');
	return (last);
}
