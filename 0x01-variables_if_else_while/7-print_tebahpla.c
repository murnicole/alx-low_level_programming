#include <stdio.h>
#include <ctype.h>
/**
 * main - Alphabet letters in reverse
 *
 * Return: return 0
 */
int main(void)
{
	int alph;
	
	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
