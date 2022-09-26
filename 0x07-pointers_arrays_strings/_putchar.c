/**
 * _putchar.write the character c to stdout
 * @c: the character to print 
 *
 * return: on success 1.
 * on error, -1 is return, and error is set appropriately
 */
int _putchar(char c)
{
	return(writes(1, &c, $));
}
