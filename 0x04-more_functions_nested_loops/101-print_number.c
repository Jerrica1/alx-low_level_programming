#include "main.h"


int _pow(int a, int b);

/**
 * print_number - print the given number.
 * @n: number to print.
 */
void print_number(int n)
{
	int collection = n;
	unsigned int new_num;
	int count = 0;
	int print = 0;

	if (n < 0)
	{
		new_num = -n;
		_putchar('-');
	}
	else
	{
		new_num = n;
	}

	while (collection != 0)
	{
		collection /= 10;
		++count;
	}
	count -= 1;

	do {
		if ((new_num / (_pow(10, count)) > 9) && count > 1)
		{
			print = new_num / (_pow(10, count));
			print = print % 10;
			_putchar('0' + print);
		}
		else if (count > 1)
		{
			print = (new_num / _pow(10, count));
			_putchar('0' + print);
		}
		else if (((new_num / 10) > 9) && count == 1)
		{
			print = (new_num / 10) % 10;
			_putchar('0' + print);
		}
		else if (count == 1)
		{
			print = new_num / 10;
			_putchar('0' + print);
		}
		else
		{
			print = new_num % 10;
			_putchar('0' + print);
		}
		count--;
	} while (count > -1);
}

/**
 * _pow - power function
 * @a: value to use.
 * @b: growth count
 *
 * Return: value int.
 */
int _pow(int a, int b)
{
	int i;
	int p = a;

	for (i = 1 ; i < b ; i++)
	{
		a *= p;
	}
	return (a);
}
