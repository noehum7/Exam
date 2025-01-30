#include <unistd.h>

int main(int argc, char *av[])
{
	int i = 0;
	int start;
	int end;
	int flag = 0;

	if (argc >= 2)
	{
		// Saltar espacios iniciales
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		start = i;
		// Buscar final de la 1ª palabra
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			i++;
		end = i - 1;
		// Saltar espacio despues de la 1ª palabra
		if (av[1][i])
			i++;
		// Imprimir resto del string
		while (av[1][i])
		{
			if (!(av[1][i] == ' ' || av[1][i] == '\t') || (av[1][i + 1] && av[1][i + 1] != ' ' && av[1][i + 1] != '\t'))
			{
				write(1, &av[1][i], 1);
				flag = 1; // Marcamos que se ha impreso algo
			}
			i++;
		}
		// Si hay palabras impresas imprimimos un espacio entre ellas y la primera
		if (flag)
			write(1, " ", 1);
		// Imprimimos la primera palabra
		while (start <= end)
			write(1, &av[1][start++], 1);
	}
	write(1, "\n", 1);
	return (0);
}

/*
Escriba un programa que tome una cadena y la muestre después de rotar
una palabra a la izquierda.

Así, la primera palabra pasa a ser la última y las demás permanecen en el mismo orden.

Una "palabra" se define como parte de una cadena delimitada por espacios/tabulaciones, o
por el inicio/final de la cadena.

Las palabras estarán separadas por un solo espacio en la salida.

Si hay menos de un argumento, el programa muestra \n.

Ejemplo:

$>./rostring "abc " | cat -e
abc$
$>
$>./rostring "Que la lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring " AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
*/