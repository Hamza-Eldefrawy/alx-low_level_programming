#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: A C program that prinst with put function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char who = 'a';

	while (who <= 'z')
	{
		if (who == 'e' || who == 'q')
			who++;
		putchar(who);
		who++;
	}
	putchar('\n');

	return (0);
}
