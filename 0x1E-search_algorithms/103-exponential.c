#include <stdio.h>
#include <stdlib.h>

/**
 * exponential_search - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{

size_t bound = 1;
size_t i;
size_t left = bound / 2;
size_t right = (bound < size - 1) ? bound : size - 1;


if (array == NULL)
return (-1);

while (bound < size && array[bound] < value)
{
printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
bound *= 2;
}

printf("Value found between indexes [%lu] and [%lu]\n", left, right);

while (left <= right)
{
size_t mid = (left + right) / 2;

printf("Searching in array: ");
for (i = left; i <= right; ++i)
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
return (-1);
}
