#include <main.h>
/**
 *  _putchar - writes the character c to stdout
 *  @c: The character to print
 *  return - Return 0 always on success
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
