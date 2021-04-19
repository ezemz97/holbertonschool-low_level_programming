#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[];
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    printf("Found %d at index: %d\n", 200, binary_search(array, 1, 200));
    printf("Found %d at index: %d\n", 99, binary_search(array, 1, 99));
    printf("Found %d at index: %d\n", 70, binary_search(array, 1, 70));
}