#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
unsigned int num = 1;
char *byte_ptr = (char *)&num;
/* If the least significant byte is 1, it's little endian */
if (*byte_ptr == 1)
return 1;  /* Little Endian */
else
return 0;  /* Big Endian */
}
