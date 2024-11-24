#include <unistd.h>

int ft_char_repeat(char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	while (abc[i])
	{
		if (abc[i] == c)
		{
			break ;
		}
		count++;
		i++;
	}
	return (count);
}

int main(int argc, char** argv)
{
	int i;
	int count;
	int j;

	i = 0;
	count = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			j = 0;
			count = ft_char_repeat(argv[1][i]);
			while (j <= count)	
			{
				write(1, &argv[1][i], 1);
				j++;
			}	
			i++;
		}
	}

	write(1, "\n", 1);
	return (0);
}

int main(int argc, char** argv)
{
	int i;
	int count;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				count = argv[1][i] - 'a' + 1;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				count = argv[1][i] - 'A' + 1;
			else count = 1;
			while (count --)
				write(1, argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}