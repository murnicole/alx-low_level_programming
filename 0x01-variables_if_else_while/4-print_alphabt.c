#include <stdio.h>
#include <ctype.h>
/**
*main - Aphabet letters except q and e
*
*Return: return 0
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
