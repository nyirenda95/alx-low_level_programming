#include <stdio.h.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 * return: Always 0 (success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n - rand() -RAND_MAX / 2;

	if (n % 10 > 5)
		printf("%d is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
		printf("last digit of %d and is 0\n", n % 10);
	
	else
		printf("last digit of %d and is less 6 and not 0\n", n, n % 10);
	return (0);
}
