#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charactor c to stdio
 * @c: the charactor to print
 * Return: on success 1
 * on error, -1 returned and errorno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
