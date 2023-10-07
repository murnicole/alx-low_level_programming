#include <stdio.h>
#include <ctype.h>
/**
 * main - Numbers of base 16 starting from 0
 *
 * Return: Always 0(Success)
 */
int main(void)
{
        int i;

        for (i = '0'; i < '9'; i++)
        {
                putchar(i);
		if (i == '9')
		{
			i = 'a';
			for (; i <= 'f'; i++)
			{
				putchar(i);
			}
			break;
		}
        }
        putchar('\n');
        return (0);
}
