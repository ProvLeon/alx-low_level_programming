#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main- entry point
 * Return: always 0 (if successful)
* betty style doc for function main goes there
*/
int main(void)
{
	int n;
	int n1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	n1 = n % 10;
	if (n1 > 5)
		printf("Last digit of %d and is greater then 5", n1);
	else if (n1 < 6 != 0)
		printf("Last digit of %d and is less that 6 and not 0", n1);
	else if (n1 == 0)
		printf("Last digit of %d and is 0", n1);
	return (0);
}
