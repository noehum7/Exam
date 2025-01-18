#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int count;
	t_list *new = begin_list;

	count = 0;
	while (new != 0)
	{
		count++;
		new = new->next;
	}
	return count;

	// if (begin_list == 0)
	// 	return (0);
	// else
	// 	return (1 + ft_list_size(begin_list->next));
}
