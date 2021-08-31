#include "search_algos.h"
/**
 * jump_search - Searches a value in an array of ascending integers.
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	int a = 0;
	int n = size;
	int b = sqrt(n);

	while (array[fmin(b, n) - 1 < value])
	{
		printf("Value checked array[%i] = [%i]\n", a, array[a]);
		a = b;
		b = b + sqrt(n);
		if (a >= n)
			return (-1);
	}
	printf("BB: %d\n", b);
	while (array[a] < value)
	{
		printf("Value checked array[%i] = [%i]\n", a, array[a]);
		a++;
		if (a == fmin(b, n))
			return (-1);
	}
	if (array[a] == value)

		return (a);

	return (-1);
}
