#include <stdio.h>
#include <ctype.h>
/**
 * main - Print alphabet in lowercase except q and e
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph == 'q' || alph == 'e')
		{
		continue;
		}
		putchar(alph);
	}
	putchar('\n');
	return (0);
}	
