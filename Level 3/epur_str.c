#include <unistd.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int flag = 0;
	if (argc == 2)
	{
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while(argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				flag = 1;
			else
			{
				if (flag)
					write(1, " ", 1);
				flag = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	
	write(1, "\n", 1);
	return 0;
}

/*
** Este programa limpia y normaliza una cadena de texto pasada como argumento:
** 1. Elimina los espacios y tabulaciones del inicio de la cadena
** 2. Reemplaza múltiples espacios o tabulaciones consecutivas por un único espacio
** 3. Elimina los espacios y tabulaciones del final de la cadena
** 
** Ejemplo de uso:
** Input:  "./epur_str    hola     que    tal   "
** Output: "hola que tal"

	$> ./epur_str " this        time it      will     be    more complex  . " | cat -e
	this time it will be more complex .$
**
** El programa solo procesa la cadena si recibe exactamente un argumento.
** En cualquier caso, siempre imprime un salto de línea al final.
*/

