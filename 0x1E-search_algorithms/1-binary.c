#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array using Binary search
 * @array:Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{

size_t left = 0;
size_t i;
size_t right = size - 1;

if (array == NULL)
return (-1);

while (left <= right)
{

size_t mid = (left + right) / 2;

printf("Searching in array: ");

for (i = left; i <= right; i++)
{
printf("%d", array[i]);

if (i < right)
printf(", ");
}

printf("\n");
if (array[mid] == value)
return (mid);

if (array[mid] < value)
left = mid + 1;

else
right = mid - 1;
}
return (-1);
}
