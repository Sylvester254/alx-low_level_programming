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
    size_t i = 0;
    size_t jump = sqrt(size);
    if (array != NULL && size > 0)
    {
        printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
        while (*(array + min(jump, size) - 1) < value)
        {
            i = jump;
            jump += sqrt(size);
            if (i >= size)
            {
                return (-1);
            }
        }
        while (*(array + i) < value)
        {
            i++;
            if (i == min(jump, size))
            {
                return (-1);
            }
        }
        if (*(array + i) == value)
        {
            printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
            return (i);
        }
        else
        {
            printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
        }
    }
    return (-1);
}
