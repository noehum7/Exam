#include <unistd.h>

char *rev_print(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	i--;
	while (i >= 0)
		write(1, &str[i--], 1);
	return (str);
}

/*
Escribe una función que muestre un string en orden inverso.
Debe devolver el string, y el string pasado por parámetro no es modificable.
El prototipo de la función es el siguiente:
char	*rev_print(char *str);
*/
