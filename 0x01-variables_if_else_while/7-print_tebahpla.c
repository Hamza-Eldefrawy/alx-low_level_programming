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
	char who = 'z';

	while (who >= 'a')
	{
		putchar(who);
		who--;
	}
	putchar('\n');

	return (0);
}
