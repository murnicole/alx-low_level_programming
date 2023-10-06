#include <stdio.h>
#include <ctype.h>
/**
 * main - Numbers base 10
 *
 * Return: return 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
