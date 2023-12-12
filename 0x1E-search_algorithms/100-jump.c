#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array
 * using the Jump search algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: Index where value is located or -1 if not present.
 */
int jump_search(int *array, size_t size, int value)
{

size_t jump = sqrt(size);
size_t prev = 0;
size_t end;
if (array == NULL || size == 0)
return (-1);
while (array[prev] < value)
{
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

if (prev + jump >= size || array[prev + jump] >= value)
{
printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + jump);
break;
}

prev += jump;
}

end = (prev + jump >= size) ? size : prev + jump;
printf("Value found between indexes [%lu] and [%lu]\n", prev, end);

for (; prev < end && array[prev] < value; prev++)
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

return ((prev < size && array[prev] == value) ? (int)prev : -1);
}
