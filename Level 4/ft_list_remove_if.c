#include "list.h"
#include <stdlib.h>

/*
t_list **begin_list  // Puntero al inicio de la lista
void *data_ref       // Dato a comparar
int (*cmp)()         // Función de comparación
*/
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	// Si el puntero a puntero es NULL o si la lista está vacía
	if (begin_list == NULL || *begin_list == NULL)
		return ;
	// tmp almacena temporalmente el nodo actual para manipular la lista sin afectar al puntero original
	t_list *tmp = *begin_list; // Desreferenciamos begin list
	if (cmp(tmp->data, data_ref) == 0)
	{
		*begin_list = tmp->next; // Actualiza lista
		free(tmp); // Libera nodo temporal
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else 
		ft_list_remove_if(&tmp->next, data_ref, cmp);
}

// Escribe una función llamada ft_list_remove_if que elimine de la lista pasada 
// cualquier elemento cuyos datos sean "iguales" a los datos de referencia.
// Hay que eliminar los nodos de la lista enlazada que coinciden con data_ref, usando la funcion de comparacion cmp.

// void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
// cmp toma dos void* y devuelve 0 cuando ambos parámetros son iguales.

/*
Lista inicial:    1 -> 2 -> 2 -> 3 -> 2 -> NULL
data_ref:         2
Después:          1 -> 3 -> NULL
*/

#include <stdio.h>
#include <string.h>

// Función de comparación
int cmp(void *data1, void *data2)
{
    return strcmp((char*)data1, (char*)data2);
}

// Función para imprimir lista
void print_list(t_list *list)
{
    while (list)
    {
        printf("%s -> ", (char*)list->data);
        list = list->next;
    }
    printf("NULL\n");
}

// Función para crear nuevo nodo
t_list *new_node(void *data)
{
    t_list *node = malloc(sizeof(t_list));
    node->data = data;
    node->next = NULL;
    return node;
}

int main()
{
    // Caso 1: Lista original
    t_list *list1 = new_node("hola");
    list1->next = new_node("mundo");
    list1->next->next = new_node("hola");
    list1->next->next->next = new_node("42");
    printf("\nTest 1 - Lista mixta:\n");
    print_list(list1);
    ft_list_remove_if(&list1, "hola", cmp);
    print_list(list1);

    // Caso 2: Elementos iguales consecutivos
    t_list *list2 = new_node("test");
    list2->next = new_node("test");
    list2->next->next = new_node("test");
    printf("\nTest 2 - Elementos iguales consecutivos:\n");
    print_list(list2);
    ft_list_remove_if(&list2, "test", cmp);
    print_list(list2);

    // Caso 3: Lista con un elemento
    t_list *list3 = new_node("unico");
    printf("\nTest 3 - Un solo elemento:\n");
    print_list(list3);
    ft_list_remove_if(&list3, "unico", cmp);
    print_list(list3);

    // Caso 4: Lista vacía
    t_list *list4 = NULL;
    printf("\nTest 4 - Lista vacía:\n");
    print_list(list4);
    ft_list_remove_if(&list4, "nada", cmp);
    print_list(list4);

    return 0;
}