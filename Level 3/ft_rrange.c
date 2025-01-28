#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int* result;
	int length = (start > end ? (start - end) : (end - start));
	int i;

	i = 0;
	length += 1;
	result = malloc(sizeof(int) * (length));
	if (result == NULL)
		return NULL;
	while (i < length)
	{
		result[i++] = end;
		if (start > end)
			end++;
		else 
			end--;
	}
	return (result);
}

// Escribe la siguiente función:

// int *ft_rrange(int inicio, int fin);

// Debe asignar (con malloc()) una matriz de números enteros, llenarla con números 
// consecutivos, valores que comienzan al final y terminan al inicio (¡incluidos 
// el inicio y el final!), luego devuelve un puntero al primer valor de la matriz.

// Ejemplos:

// - Con (1, 3) devolverás una matriz que contiene 3, 2 y 1
// - Con (-1, 2) devolverás un array que contiene 2, 1, 0 y -1.
// - Con (0, 0) devolverás una matriz que contiene 0.
// - Con (0, -3) devolverás una matriz que contiene -3, -2, -1 y 0.