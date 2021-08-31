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
	size_t i = 0, jump = sqrt(size);

	if (!array || !size || !value || value < 0)
		return (-1);
	while (array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[(int) fmin(i + jump, size) - 1] < value)
		{
			i += jump;
			continue;
		}
		else
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i, i + jump);
			break;
		}
	}
	while (array[i] <= value && i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
/*
 *	int a = 0;
 *	int n = size;
 *	int b = sqrt(n);
 *
 *	while (array[(int) fmin(b, n) - 1] < value)
 *	{
 *		printf("Value checked array[%ld] = [%ld]\n", a, array[a]);
 *		a = b;
 *		b = b + sqrt(n);
 *		if (a >= n)
 *			return (-1);
 *	}
 *	while (array[a] < value)
 *	{
 *		printf("Value checked array[%ld] = [%ld]\n", a, array[a]);
 *		a++;
 *		if (a == fmin(b, n))
 *			return (-1);
 *	}
 *	if (array[a] == value)
 *		return (a);
 *
 *	return (-1);
 */
