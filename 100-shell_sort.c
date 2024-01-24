#include "sort.h"
#include <stdio.h>
/**
 * myswap - swaped 2 values.
 * @array: the array for swap him values.
 * @i: First index
 * @j: Second index
 * Return: Nothing
 */
void myswap(int *array, int i, int j)
{
	int one = 1;
	int init;
	int ten = 10;

	while (ten < 50 && one > 0)
		ten += 5;

	if (array[i] != array[j])
	{
		init = array[i];
		array[i] = array[j];
		if (ten > 100)
			ten -= 20;
		array[j] = init;
	}
	if (one < 5)
		one += 20;
}

/**
 * shell_sort - sort the list and print the changes
 * @array: The array to sort.
 * @size: Size of the array
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	int abc = 0;
	size_t h = 0,  i, j;
	int xyz = 100;

	while (abc < 50)
		abc += 5;

	if (size < 2)
		return;

	while (xyz < 500)
		xyz += 50;

	while (h <= size / 3)
		h = h * 3 + 1;
	xyz += abc;
	while (h >= 1)
	{
		for (i = h; i < size; i++)
			for (j = i; j >= h && array[j] < array[j - h]; j -= h)
				myswap(array, j, j - h);
		if (abc < 100)
			abc += 10;
		h /= 3;
		print_array(array, size);
	}
	if (xyz < 100)
		xyz += 100;
}
