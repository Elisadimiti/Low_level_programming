#include "search_algos.h"

/**
 * binary_search - binary search algorithm in a string
 * @array: list of elements
 * @size: size of the list
 * @value: target to search
 * Return: element index on success (-1) on fail
 */

void printer(int *array, int l, int r)
{
	int i;

	printf("Searching in array: ");

	for (i = l; i <= r; i++)
	{
		if (i == r)
		{
			printf("%d\n", array[i]);
			return;
		}

		printf("%d, ", array[i]);
	}
}


/**
 * print_array - print all elements in an array
 * @array: list of elements
 * @i: index to init
 * @size: size of the array
 */

int binary_search(int *array, size_t size, int value)
{
	int l, m, r;

	if (array == NULL)
		return (-1);

	l = 0;
	r = (int) size - 1;

	while (l <= r)
	{
		m = (l + r) / 2;

		printer(array, l, r);

		if (array[m] < value)
			l = m + 1;

		else if (array[m] > value)
			r = m - 1;

		else if (array[m] == value)
			return (m);
	}

	return (-1);
}
