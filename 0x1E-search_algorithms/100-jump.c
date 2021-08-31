#include "search_algos.h"
/**
 * jumpump_search - Searches a value in an array of ascending integers.
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = sqrt(size);

	if (!array)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i += jump;
	}

	jump = i - jump;
	printf("Value found between indexes [%ld] and [%ld]\n", jump, i);
	i = i >= size ? size - 1 : i;
	printf("i: %ld", i);

	while (jump <= i)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		if (array[jump] == value)
			return (jump);
		jump++;
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
