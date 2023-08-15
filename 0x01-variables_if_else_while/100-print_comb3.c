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
	int who = 0, digit;

	while (who <= 9)
	{
		digit = 0;
		while (digit <= 9)
		{
			if (who != digit && who < digit)
			{
				putchar(who + 48);
				putchar(digit + 48);

				if (who + digit != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit++;
		}
		who++;
	}
	putchar('\n');

	return (0);
}
