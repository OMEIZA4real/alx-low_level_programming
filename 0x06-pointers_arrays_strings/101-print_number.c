#include "main.h"
/**
 * print_number - prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;

	}

	if ((num / 10) > 0)
		print_number(i / 10);

	_putchar(i % 10 + '0');

}
