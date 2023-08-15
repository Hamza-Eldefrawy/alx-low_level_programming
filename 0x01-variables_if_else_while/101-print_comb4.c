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
	int who = 0, digit, digit2;

	while (who <= 9)
	{
		digit = 0;
		while (digit <= 9)
		{
			digit2 =0;
			while (digit2 <= 9)
			{
				if (who != digit && who < digit && digit != digit2 && digti < digit2)
				{
					putchar(who + 48);
					putchar(digit + 48);
					putchar(digit2 + 48);

					if (who + digit + digit2 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				digit2++
			}
			digit++;
		}
		who++;
	}
	putchar('\n');

	return (0);
}
