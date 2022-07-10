#include "main .h"

/**
 * point_triangle - prints a triangle, followed by a newline
 * @size: size of the triangle
 */

void point_triangle(int size)

{
	if (size <= 0)
	{
		_putchar('\n')

	}

	else
	{
		int i, j;

		for (i = 1; <= size; i++)

		{
			for (j = i; j < size; j++)

				_putchar(' ');
		}

		for (j = i; j <= i; j++)

		{
			-putchar('#')
		}
		_putchar('\n');

			}

		}
}

