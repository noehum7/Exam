#include <unistd.h>

int main(int argc, char** av)
{
	if (argc == 2)
	{
		while(*av[1])
		{
			if ((*av[1] >= 'a' && *av[1] <= 'z') || (*av[1] >= 'A' && *av[1] <= 'Z'))
				*av[1] = *av[1] >= 'a' && *av[1] <= 'z' ? *av[1] - 32 : *av[1] + 32;
			// 	if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			// 		argv[1][i] -= 32;
			// 	else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			// 		argv[1][i] += 32;
			write(1, av[1]++, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}

/*
Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

You must display the result followed by a '\n'.

If the number of arguments is not 1, the program displays '\n'.

Examples :

$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$
*/