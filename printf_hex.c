#include "main.h"

/**
 * _x - binary number printed
 * @num: number arguements
 * @printed: printed characters
 * @uppercase: the uppercase
 * Return: printed charcaters
 */

int _x(unsigned int num, int printed, int uppercase)
{
	int hex[100], i = 0, j;

	while (num != 0)
	{
		int remainder = num % 16;

		if (remainder < 10)
		{
			hex[i] = 48 + remainder;
		}
		else
		{
			if (uppercase)
			{
				hex[i] = 65 + (remainder - 10);
			}
			else
			{
				hex[i] = 97 + (remainder - 10);
			}
		}
		i++;
		num /= 16;
	}
	if (i == 0)
	{
		putchar('0');
		printed++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			putchar(hex[j]);
			printed++;
		}
	}
	return (printed);
}
