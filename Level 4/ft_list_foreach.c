#include "list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

/*
Escriba una función que tome una lista y un puntero de función, y aplique esta
función para cada elemento de la lista.

Debe declararse de la siguiente manera:

void ft_list_foreach(t_list *begin_list, void (*f)(void *));

La función señalada por f se utilizará de la siguiente manera:

(*f)(list_ptr->data);
*/