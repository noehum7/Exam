#include <unistd.h>

int	main(void)
{
	int n = 1;
	
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (n % 3 == 0)
			write(1, "fizz\n", 5);
		else if (n % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			if (n > 9)
				write(1, &"0123456789"[n / 10], 1);
			write(1, &"0123456789"[n % 10], 1);
			write(1, "\n", 1);
		}
		n++;
	}
	return (0);
}

