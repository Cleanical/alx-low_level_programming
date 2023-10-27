#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted decimal
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int i = 0;
    size_t len = 0;
    size_t j = 0;
    unsigned int sum = 0;
    unsigned int powr = 1;
    int base = 2;

    if (b == NULL)
        return (0);

    for (len = 0; b[len] != '\0'; len++)
        ;

    if (len == 1 && (b[0] == '0' || b[0] == '1'))
        return (b[0] - '0');

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);
        for (j = len - 1; j > 0; j--)
        {
            powr = powr * base;
        }
        sum = sum + (powr * (b[i] - '0'));
        len--;
        powr = 1;
    }

    return (sum);
}
