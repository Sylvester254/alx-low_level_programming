#include "search_algos.h"
/**
 * interpolation_search - function that searches for a value in a
 * sorted array of integers using the Interpolation search algorithm
 *
 * @array: first element of the array to search in
 * @size: number of elements in array
 * @value:  value to search for
 * Return: int
 */
int interpolation_search(int *array, size_t size, int value)
{
    if (array != NULL)
    {
        int low = 0;
        int high = size - 1;
        size_t pos = 0;

        while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high]))
        {
            pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

            if (array[pos] < value)
                low = pos + 1;
            else if (value < array[pos])
                high = pos - 1;
            else
                printf("Value checked array[%d] = [%d]\n", (int)pos, *(array + pos));
            return pos;
        }

        if (value == array[low])
        {
            printf("Value checked array[%d] = [%d]\n", (int)low, *(array + low));
            return low;
        }
    }
    return (-1);
}
