#include <stdio.h>
#include "main.h"

/**
* print_number - prints an integer
* @n: integer to be printed
*/

void print_number(int n)
{

	unsigned int num = n;
	if (n < 0)
	{

		n1 = -n;
		_putchar('-');
	
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
	{

		print_number(n1 / 10);
	}

	putchar((n1 % 10) + '0');
}
