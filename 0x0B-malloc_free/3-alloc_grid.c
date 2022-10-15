#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns pointer to 2D
 *
 * @width: width
 * @height: height
 *
 * Return: pointer to grid or NULL of failure
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int hgt, wid;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (hgt = 0; hgt < heigt; hgt++)
	{
		twoD[hgt] = malloc(sizeof(int) * width);

		if (twoD[hgt] == NULL)
		{
			for (; hgt >= 0; hgt--)
				free(twoD[hgt]);

			free(twoD);
			return (NULL);
		}
	}

	for (hgt = 0; hgt < height; hgt++)
	{
		for (wid = 0; wid < width; wid++)
			twoD[hgt][wid] = 0;
	}

	return (twoD);
}
