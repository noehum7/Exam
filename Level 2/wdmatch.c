int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		if (argv[1][i] == '\0')
        {
            i = 0;
            while(argv[1][i])
                write(1, &argv[1][i++], 1);
        }
	}
	write(1, "\n", 1);
	return 0;
}


// Escriba un programa que tome dos cadenas y verifique si es posible
// escribir la primera cadena con caracteres de la segunda cadena, respetando
// el orden en que aparecen estos caracteres en la segunda cadena.

// Si es posible, el programa muestra la cadena, seguida de \n, de lo contrario
// simplemente muestra un \n.

// Si el número de argumentos no es 2, el programa muestra un \n.

// $>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
// faya$
// $>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
// $
// $>./wdmatch "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq " | cat -e
// forty two$
// $>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
// $