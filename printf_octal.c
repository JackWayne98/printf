#include "main.h"
/**
 * printf_octal - prints octal number
 * @num: number of arguements
 * @printed: printed characters
 * Return: printed charcaters
 */

int printf_octal(unsigned int num, int printed)
{
	int oct[100], i = 0, j;

	while (num != 0)
	{
		int remainder = num % 8;

		oct[i] = 48 + remainder;
		i++;
		num /= 8;
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
			putchar(oct[j]);
			printed++;
		}
	}
	return (printed);
}
