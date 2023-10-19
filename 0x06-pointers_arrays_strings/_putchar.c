#include <unistd.h>

/**
 * _putchar is writing the characters c for unistd
 * @c is the char to print it
 *
 * Returb In Success 1
 * on error -1
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
