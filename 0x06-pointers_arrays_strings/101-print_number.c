#include <stdio.h>

/**
 * print_number - function: prints an integer
 *
 * @n: integer to be printed in program
 */

void print_number(int n);

int main()
{
	print_number(123);
	return (0);
}
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}

	if (n >= 10)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}
