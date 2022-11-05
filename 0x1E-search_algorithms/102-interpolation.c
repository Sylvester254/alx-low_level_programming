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

        while ((array[high] != array[low]))
        {
            pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
            if (pos >= size)
            {
                printf("Value checked array[%d] is out of range\n", (int)pos);
                break;
            }
            printf("Value checked array[%d] = [%d]\n", (int)pos, *(array + pos));
            if (array[pos] < value)
                low = pos + 1;
            else if (value < array[pos])
                high = pos - 1;
            else
                return pos;
        }
        /** This ternary function is same as
         * the expression from line 39,
         * return (value == array[low] ? (int)low : -1);
         */
        if (value == array[low])
        {
            printf("Value checked array[%d] = [%d]\n", (int)low, *(array + low));
            return low;
        }
    }
    return (-1);
}
