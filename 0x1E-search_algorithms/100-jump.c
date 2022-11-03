#include "search_algos.h"
/**
 * min - finds the minimum value
 *
 * @a: first value
 * @b: second value
 * Return: int
 */
size_t min(size_t a, size_t b)
{
    if (b > a)
    {
        return a;
    }
    else
    {
        return b;
    }
}
/**
 * jump_search - function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 *
 * @array: first element of the array to search in
 * @size:number of elements in array
 * @value:is the value to search for
 * Return: int
 */
int jump_search(int *array, size_t size, int value)
{
    size_t l, r, jump;
    int val;

    if (array != NULL && size > 0)
    {
        jump = sqrt(size);
        l = 0;
        r = jump;
        val = array[l];
        printf("Value checked array[%lu] = [%d]\n", l, val);
        while (r < size && val < value)
        {
            if (array[r] >= value)
                break;
            l += jump;
            r += jump;
            val = array[l];
            printf("Value checked array[%lu] = [%d]\n", l, val);
        }
        if (l >= size || val > value)
            return (-1);
        printf("Value found between indexes [%lu] and [%lu]\n", l, r);
        while (l <= min(size - 1, r) && val <= value)
        {
            val = array[l];
            printf("Value checked array[%lu] = [%d]\n", l, val);
            if (val == value)
                return (l);
            l++;
        }
    }
    return (-1);
}
