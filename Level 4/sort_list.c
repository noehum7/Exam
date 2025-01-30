#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int temp; // para almacenar los datos de los nodos
	t_list *begin = lst; // para almacenar el inicio de la lista

	while (lst && lst->next) // mientras haya nodos para comparar (no sea nulo el siguiente)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0) // si los datos no están en orden
		{
			temp = lst->data;                // guarda temporalmente el valor del nodo actual
            lst->data = lst->next->data;   // colocar el valor del siguiente nodo en el nodo actual
            lst->next->data = temp;          // colocar el valor temporal en el siguiente nodo
            lst = begin;                       // volver al inicio de la lista para continuar ordenando
		}
		else
			lst = lst->next; // si los datos están en orden, pasar al siguiente nodo
	}
	return (begin);  // devolver el inicio de la lista
}

/*
Escribe las siguientes funciones:

t_list *sort_list(t_list* lst, int (*cmp)(int, int));

Esta función debe ordenar la lista dada como parámetro, usando la función puntero cmp para seleccionar el orden a aplicar y devuelve un puntero al primer elemento de la lista ordenada.

Las duplicaciones deben permanecer.
Las entradas siempre serán consistentes.

Debes utilizar el tipo t_list descrito en el archivo list.h que se te proporciona. Debes incluir ese archivo.
(#include "list.h"), pero no debes entregarlo. Usaremos nuestro propio
para compilar su tarea.

Las funciones pasadas como cmp siempre devolverán un valor diferente de
0 si a y b están en el orden correcto, 0 en caso contrario.

Por ejemplo, la siguiente función utilizada como cmp ordenará la lista
en orden ascendente:

int ascending(int a, int b)
{
	return (a <= b);
}
*/