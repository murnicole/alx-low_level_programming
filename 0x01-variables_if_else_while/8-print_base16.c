#include <stdio.h>
#include <ctype.h>
/**
*main - Numbers of base 16
*
*Return: returns 0
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
		{
			num = 'a';
			for (; num <= 'f'; num++)
			{
				putchar(num);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
