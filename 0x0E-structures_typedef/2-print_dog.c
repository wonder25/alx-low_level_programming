#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	(d->name == NULL) ? printf("Name: (nill)\n") :
	 printf("Name: %s\n", d->name);
	(d->age < 0) ? printf("Age: (nill)\n") :
	 printf("Age: %f\n", d->age);
	(d->owner == NULL) ? printf("Owner: (nill)\n") :
	 printf("Owner: %s\n", d->owner);
}

