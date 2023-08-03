#include "main.h"

#include <unistd.h>

/**

_putchar - prints a character to stdout
@c: The character to be printed
This function writes the character c to the standard output.
Return: On success, it returns 1.
On error, it returns -1 and sets the appropriate errno value.
*/
int _putchar(char c) {
  return (write(1, & c, 1));
}
