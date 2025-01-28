#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);

		if (n1 > 0 && n2 > 0)
		{
			int min = (n1 < n2) ? n1 : n2;
			while (min > 0)
			{
				if (n1 % min == 0 && n2 % min == 0)
				{
					printf("%d", min);
					break ;
				}
				min--;
			}
		}
	}
	printf("\n");
	return (0);
}

/*
Escribe un programa que tome dos cadenas que representan dos enteros estrictamente positivos que caben en un int.

El programa debe mostrar su máximo común divisor seguido de una nueva línea (siempre es un entero estrictamente positivo).

Si el número de parámetros no es 2, el programa debe mostrar una nueva línea.

Ejemplos:
./pgcd 42 10 muestra 2
./pgcd 42 12 muestra 6
./pgcd 14 77 muestra 7
./pgcd 17 3 muestra 1
./pgcd muestra una nueva línea
*/
