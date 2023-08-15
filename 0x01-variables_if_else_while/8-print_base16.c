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
	int who = 48;

	while (who <= 102)
{
	if (who == 58)
		who += 39;
	putchar(who);
	who++;
}
	putchar('\n');

	return (0);
}
