#include <unistd.h>

void ft_putchar(char c, int n)
{
	while (n > 0)
	{
		write(1, &c, 1);
		n--;
	}
}

void repeat_alpha(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			ft_putchar(*str, *str - 'a' + 1);
		else if (*str >= 'A' && *str <= 'Z')
			ft_putchar(*str, *str - 'A' + 1);
		else
			write(1, str, 1);
		str++;
	}
}

int main(int argc, char **av)
{
	if (argc == 2)
		repeat_alpha(av[1]);
	write(1, "\n", 1);
	return (0);
}

// int main(int argc, char** argv)
// {
// 	int i;
// 	int count;

// 	if (argc == 2)
// 	{
// 		i = 0;
// 		while (argv[1][i])
// 		{
// 			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
// 				count = argv[1][i] - 'a' + 1;
// 			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
// 				count = argv[1][i] - 'A' + 1;
// 			else count = 1;
// 			while (count --)
// 				write(1, argv[1][i], 1);
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }

/*
Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/