#include "main.h"


/**

binary_to_uint - converts a binary number to an unsigned int
@b: A string containing the binary number
This function takes a string representation of a binary number and converts it
to an unsigned int.
Return: The converted number as an unsigned int.
*/
unsigned int binary_to_uint(const char * b) {
  int i;
  unsigned int dec_val = 0;

  if (!b)
    return (0);

  for (i = 0; b[i]; i++) {
    if (b[i] < '0' || b[i] > '1')
      return (0);
    dec_val = 2 * dec_val + (b[i] - '0');
  }

  return (dec_val);
}