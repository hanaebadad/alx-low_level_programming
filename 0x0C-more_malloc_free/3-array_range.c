#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
		int *arr;
			int i, tot;

if (min > max)
	return (NULL);
tot = max - min + 1;
	arr = malloc(sizeof(int) * tot);

	if (arr == NULL)
	return (NULL);

	for (i = 0; i < tot; i++, min++)
	{
	arr[i] = min;

														}

	return (arr);

}
