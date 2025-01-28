#include <unistd.h>

int ft_str_length(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char *rev_print(char *str)
{
	int i = ft_str_length(str);

	while (i-- >= 0)
		write(1, &str[i], 1);
	return (str);
}

int main(int argc, char **av)
{
	if (argc ==2)
		rev_print(av[1]);
	write(1, "\n", 1);
	return (0);
}

/*
Write a program that takes a string, and displays the string in reverse
followed by a newline.
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
*/