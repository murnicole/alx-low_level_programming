#include <stdio.h>
#include <ctype.h>
/**
 * main - Alphabet print lowercase then in uppercase
 *
 * Return: return 0 (Success)
 */
int main(void)
{
	int alPH;

	for (alPH = 'a'; alPH <= 'z'; alPH++)
	{
		alPH = tolower(alPH);
		putchar(alPH);
		if (alPH == 'z')
		{
			alPH = 'A';
			for (; alPH <= 'Z'; alPH++)
			{
				putchar(alPH);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
