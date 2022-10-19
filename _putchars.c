#include "main.h"

/**
  * _putchars - Prints characters
  * and a newline
  * @s: character array
  *
  * Return: void
  *
void _putchars(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}i
*/

void _putchars(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);

		i++;
	}
}
