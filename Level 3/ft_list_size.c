#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int count;

	count = 0;
	while (begin_list)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}

/*
La función ft_list_size recibe un puntero al primer elemento de una lista.
Si el puntero es NULL, la función devuelve 0.
De lo contrario, la función devuelve 1 más el resultado de llamarse a sí 
misma con el puntero al siguiente elemento de la lista.
La función termina cuando el puntero es NULL.
*/