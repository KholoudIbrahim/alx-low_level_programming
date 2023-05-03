#include "main.h"

/**
 * **alloc_grid - returns a pointer
 * @width: width
 * @height: height
 * Return: (t)
 */

int **alloc_grid(int width, int height)
{
	int **t;
	int n, m;

	t = malloc(sizeof(*t) * height);

	if (width <= 0 || height <= 0 || t == 0)
	{
		return (NULL);
	}

	else
	{
		for (n = 0; n < height; n++)
		{
			t[n] = malloc(sizeof(**t) * width);

			if (t[n] == 0)
			{
				/*Free everything if malloc fails*/
				while (n--)
					free(t[n]);
				free(t);
				return (NULL);
			}

			for (m = 0; m < width; m++)
				t[n][m] = 0;
		}
	}
	/*return (t)*/
	return (t);
}
