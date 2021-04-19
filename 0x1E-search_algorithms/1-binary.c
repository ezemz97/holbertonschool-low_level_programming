#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;

	printf("Searching in array: ");
	for (size_t i = 0; i < size - 1; i++)
		printf("%d, ", array[i]);
	printf("\n");
	if (array == NULL)
		return (-1);
	if (size <= 1)
	{
		if (array[0] == value)
			return (0);
		else
			return (-1);
	}
	if (array[mid] == value)
	{
		return (mid);
		
	}
	if (array[mid] > value)
		return (binary_search(array, mid, value));
	if (array[mid] < value)
	{
		if (mid % 2 != 0)
			return (binary_search(array, size - 1, value));
		else
			return (binary_search(array, size, value));
	}
	return (-1);
}
