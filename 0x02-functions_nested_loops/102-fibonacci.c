#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers, starting with  and 2
 * separated by a comma followed by a space
 *
 * Return: 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n"0);
		else
			printf(" , ");
	}
	return (0);
}
