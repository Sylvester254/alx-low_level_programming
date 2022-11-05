#include "search_algos.h"
/**
 * exponential_search - function that searches for a value in a sorted
 * array of integers using the Exponential search algorithm
 *
 * @array:  first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: int
 */
int exponential_search(int *array, size_t size, int value)
{
    if (array != NULL)
    {
        size_t bound = 0, right;
        if (array[0] != value)
        {
            for (bound = 1; bound < size && array[bound] <= value; bound = bound * 2)
                printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
        }
        right = bound < size ? bound : size - 1;
        printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, right);
        return (_binary_search(array, bound / 2, right, value));
    }
    return -1;
}

int _binary_search(int *array, size_t left, size_t right, int value)
{
    size_t i;
    if (array != NULL)
    {
        while (right >= left)
        {
            printf("Searching in array: ");
            for (i = left; i < right; i++)
            {
                printf("%d, ", array[i]);
            }
            printf("%d\n", array[i]);
            i = left + (right - left) / 2;
            if (array[i] == value)
            {
                return i;
            }
            if (array[i] > value)
            {
                right = i - 1;
            }
            else
                left = i + 1;
        }
        return -1;
    }
    return -1;
}
