#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * Return: x10 a-z
 */

void print_alphabet_x10(void)

{
	char alp;
	int i;

	for (i = 1; i <= 10;)
	{
	for (alp = 'a'; alp <= 'z'; alp++)
	{
	_putchar(alp);
	}
	_putchar('\n');
	i++;
	}
}
