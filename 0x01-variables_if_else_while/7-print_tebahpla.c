#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (if successful)
 */
int main(void)
{
	char lcase;
	
	for (lcase = 'z'; lcase >= 'a'; lcase--)
	{
		putchar(lcase);
		putchar('\n');
	}
	return (0);
}
