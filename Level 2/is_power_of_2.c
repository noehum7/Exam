int	    is_power_of_2(unsigned int n)
{
	// if (n == 0)
	// 	return (0);
	// return (n & (n - 1)) == 0;
	return (n == 0 ? 0 : (n & (n - 1)) == 0);
}

// n = 4 (100 en binario)
// n-1 = 3 (011 en binario)
// 4 & 3 = 100 & 011 = 000 -> Es potencia de 2 (se compara cada bit individualmente)