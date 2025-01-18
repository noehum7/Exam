#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i = 0;
		int j = 0;

		while (argv[2][i] && argv[1][j])
		{
			if (argv[2][i] == argv[1][j])
				j++;
			i++;
		}
		if (argv[1][j] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return 0;
}

/*
Debe escribir un programa llamado hidenp que tome dos cadenas de caracteres y muestre 1 seguido de una nueva línea si la primera cadena está oculta en la segunda, de lo contrario, muestra 0 seguido de una nueva línea.

Decimos que s1 está oculta en s2 si es posible encontrar cada carácter de s1 en s2, en el mismo orden en que aparecen en s1.
La cadena vacía está oculta en cualquier cadena.
Si el número de parámetros no es 2, el programa muestra una nueva línea.
*/