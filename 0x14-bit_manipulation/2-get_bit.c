#include "main.h"

/**
 * get_bit - returns a value of the bit at an index in a decimal number
 * @index: index of the bit
 * @n: number to search
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;
if (index > 63)
return (-1);
bit_val = (n >> index) & 1;
return (bit_val);

}

