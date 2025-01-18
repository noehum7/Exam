#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		int i = 1;
		int j;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
					argv[i][j] += 32;
				if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') && (j == 0 || argv[i][j - 1] == ' ' || argv[i][j - 1] == '\t'))
					argv[i][j] -= 32;
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return 0;
}

/*
	Escribe un programa que tome una o varias cadenas de texto y, para cada argumento, capitalice el primer carácter de cada palabra (si es una letra) y ponga el resto en minúsculas. Luego muestra el resultado en la salida estándar seguido de un salto de línea (\n).
	Una "palabra" se define como una parte de una cadena delimitada ya sea por espacios/tabulaciones o por el inicio/fin de la cadena. Si una palabra solo tiene una letra, debe estar en mayúsculas.
	Si no hay argumentos, el programa debe mostrar solo un salto de línea (\n).

$> ./str_capitalizer | cat -e
$

$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$

$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
	 Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>
*/
