#include <stdio.h>
#include <time.h>

/* more headers goes there*/
/* betty style doc for function main goes there*/
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there*/
	#include <stdio.h>
	int lastDigit = n % 10;
	char *str = "Last digit of";

	if (lastDigit > 5)
	{
		printf("LAst digit of %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, lastDigit);
	}
	return (0);
}

