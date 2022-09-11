#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char space = '\n',
	     alphabetLower,
	     alphabetUpper;

	for (alphabetLower = 'a'; alphabetLower < 'z'; ++alphabetLower)
	{
		putchar(alphabetLower);
	}
	
	for (alphabetUpper = 'A'; alphabetUpper <= 'Z'; ++alphabetUpper);
	{
		putchar(alphabetUpper);
	}
	putchar(space);

	return(0);
}
