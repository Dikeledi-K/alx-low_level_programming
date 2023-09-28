#include "main.h"
#include <stdint.h>

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
uint32_t num = 1;
uint8_t *byte_ptr = (uint8_t *)&num;
/* If the least significant byte is 1, it's little endian */
if (*byte_ptr == 1)
printf("Little Endian\n");
}
else
{
printf("Big Endian\n");
}
(return)0;
}

