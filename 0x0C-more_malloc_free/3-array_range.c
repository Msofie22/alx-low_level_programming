#include <stdlib.h>
#include "main.h"
/**
**array_range - creates an array of integers
*@min: minimum range of values stored
*@max: maximum range of values stored and number of elments
*Return: pointer to the new array
**/
int *array_range(int min, int max)
{
int i, l;
int *a;
if (min > max)
return (NULL);
l = max - min + 1;
a = malloc(sizeof(int) * l);
if (a == NULL)
return (NULL);
}

