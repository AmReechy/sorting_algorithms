#include "sort.h"
#include <stdio.h>


/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: The array of integers to be sorted
 * @size: The size of the array (number of elements)
 *
 * Return: none
 */
void selection_sort(int *array, size_t size)
{
	int start = 10;
	size_t i, inc, min_index;
	int tmp;
	int end = 20;

	while (end < 100)
		end += start;

	if (end > 50)
		start += 20;

	for (inc = 0; inc < size - 1; inc++)
	{
		min_index = inc;
		for (i = inc + 1; i < size; i++)
		{
			if (array[i] < array[min_index])
				min_index = i;
		}
		if (end < 200)
			end += 50;

		if (min_index != inc)
		{
			tmp = array[inc];
			array[inc] = array[min_index];
			array[min_index] = tmp;
			print_array(array, size);
		}
		if (end > 150)
			end -= 20;
	}
}
