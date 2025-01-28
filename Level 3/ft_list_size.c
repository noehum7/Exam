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

	// if (begin_list == 0)
	// 	return (0);
	// else
	// 	return (1 + ft_list_size(begin_list->next));
	
	// Devuelve 1 más el resultado de llamarse a sí misma con el puntero al
        // siguiente elemento de la lista. Por ejemplo, si la lista tiene 3
        // elementos, la función devolverá 1 + 1 + 1 + 0 = 3. '0' porque el
        // último elemento de la lista es NULL.
}

/*
La función ft_list_size recibe un puntero al primer elemento de una lista.
Si el puntero es NULL, la función devuelve 0.
De lo contrario, la función devuelve 1 más el resultado de llamarse a sí 
misma con el puntero al siguiente elemento de la lista.
La función termina cuando el puntero es NULL.
*/