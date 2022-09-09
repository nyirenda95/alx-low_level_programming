#include <stdio.h>
/**
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char num,
	     space ='\n';

	for (num ='0'; num <= '9'; ++num)
	{
		putchar(num);
	}
	putchar(spacer);
	return(0);
}
