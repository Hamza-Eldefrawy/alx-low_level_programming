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
	char who = 'a', WHO = 'A';
	
	while (who <= 'z')
	{
		putchar(who);
		who++;
	}

	while (WHO <= 'Z')
        {
                putchar(WHO);
                WHO++;
        }
	putchar('\n');

	return (0);
}
