#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints struct dog
 *
 * @d: struct name
 */
void print_dog(struct dog *d)
{
if (d)
{
d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
printf("Age: %f\n", d->age);
d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
}
}
