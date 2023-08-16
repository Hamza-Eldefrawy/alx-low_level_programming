#include "main.h"

/**
 * main - Entry point
 *
 * Descrition: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void);
{
	char vm[] = "abcdefghijklmnopqrstuvwxyz";
	int ch;

	for (ch = 0; ch < 26; ch++)
		_putchar(vm[ch]);
	_putchar('\n');

	return (0);
}
