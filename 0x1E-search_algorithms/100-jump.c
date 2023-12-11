#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    
    size_t jump = sqrt(size);
    size_t prev = 0;
    int i;

	if (array == NULL || size == 0)
	{
        return (-1);
	}


    while (array[prev] < value) {
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

        if (prev + jump >= size) {
            break;
        }

        prev += jump;
    }

    printf("Value found between indexes [%d] and [%d]\n", prev - jump, prev);

    for (i = prev - jump; i <= prev && i < (int)size; i++) {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);

        if (array[i] == value) {
            return i;  
        }
    }

    return (-1);
}

