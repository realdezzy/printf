#include "main.h"

/**
 * _printint - prints int to std output
 *  @n: value to print
 *
 *  Return: void
 *  
 */

void _printint(int n)
{
    // If number is smaller than 0, put a - sign
    // and change number to positive
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
 
    // Remove the last digit and recur
    if (n/10)
        _printint(n/10);
 
    // Print the last digit
    _putchar(n%10 + '0');
}

