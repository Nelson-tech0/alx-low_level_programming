#include <stdio.h>

/**
 *  * main - Program entry point
 *    * Return: 0 on success. Error code otherwise
 *     **/

int main(void);
{
	int p = 48, q = 48, y = 48, x = 49;

	while (p < 58)
	{
		while (q < 58)
		{
			while (y < 58)
			{
				while (x < 58)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (!(p == 57 &&
						q == 56 &&
						y == 57 &&
						x == 57))
					{
						putchar(',');
						putchar(' ');
					}
					x++;
				}
				y++;
				x = 48;
			}
			q++;
			q = p;
			x = q + 1;
		}
		p++;
		q = 48;
		y = p;
		x = q + 1;
	}
	putchar('\n');
	return (0);
}
