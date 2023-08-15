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
	int who = '0';

	while (who <= '9')
	{
		putchar(who);
		if (who != '9')
		{
			putchar(',');
			putchar(' ');
		}
		who++;
	}
	putchar('\n');

	return (0);
}
