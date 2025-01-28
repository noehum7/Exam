#include <stdlib.h>

int *ft_range(int start, int end)
{
	int i = 0;
	int *range;
	int length = (start > end) ? (start - end) : (end - start);
	length += 1; // Para incluir tanto start como end

	range = malloc(sizeof(int) * (length));
	if (range == NULL)
		return NULL;
	while (i < length)
	{
		range[i++] = start;
		if (start < end)
			start++;
		else
			start--;
	}
	return (range);
}

/*
Escribe la siguiente función:

int *ft_range(int start, int end);

Debe asignar (con malloc()) una matriz de números enteros, llenarla con valores 
consecutivos que comiencen en start y terminen en end (¡Incluyendo start y end!), 
luego devolver un puntero al primer valor de la matriz.

Ejemplos:

- Con (1, 3) devolverá una matriz que contiene 1, 2 y 3.
- Con (-1, 2) devolverá una matriz que contiene -1, 0, 1 y 2.
- Con (0, 0) devolverá una matriz que contiene 0.
- Con (0, -3) devolverá una matriz que contiene 0, -1, -2 y -3.
*/