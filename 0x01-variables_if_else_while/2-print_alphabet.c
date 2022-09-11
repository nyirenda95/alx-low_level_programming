#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char space = '\n',
	     alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; ++alphabet);
	{
		putchar(alphabet);
	}
	putchar(space);
	return (0);
}
