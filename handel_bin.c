#include "main.h"
/**
 * print_binary - print unsigned integer as binary
 * @ap: pointer
 * Return: count of printed length
 */
int print_binary(va_list ap)
{
	unsigned int number = va_arg(ap, unsigned int);
	int i = 0, j;
	int count = 0;
	int binaryArr[32];

	while (number > 0)
	{
		binaryArr[i] = number % 2;
		number /= 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		count += _putchar('0' + binaryArr[j]);
	}

	if (count == 0)
	{
		_putchar('0');
		return (1);
	}

	return (count);
}
