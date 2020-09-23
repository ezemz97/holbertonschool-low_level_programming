#include <stdio.h>

int a = 0, x = 0;

int main (void)
{
	while (a < 1024)
	{
		a++;
			if (a % 3 == 0 || a % 5 == 0)
		{
			x += a;
		}
	}
	printf("%d\n", x);
}
