// unsigned int gcd(unsigned int a, unsigned int b)
// {
// 	if (b == 0)
// 		return a;
// 	return gcd(b, a % b);
// }

// unsigned int lcm(unsigned int a, unsigned int b)
// {
//     if (a == 0 || b == 0)
//         return 0;
    
//     return (a * b) / gcd(a, b);
// }

unsigned int lcm(unsigned int a, unsigned int b)
{
	// if (a == 0 || b == 0)
	// 	return 0;
	// if (a == b)
	// 	return a;
	// unsigned int max = (a > b) ? a : b;
	// unsigned int min = (a > b) ? b : a;
	// unsigned multiple = max;
	// while (1)
	// {
	// 	if ((multiple % max == 0) && (multiple % min == 0))
	// 		return multiple;
	// 	multiple += max;
	// }

	unsigned int n;
	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	unsigned int multiple = n;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n += multiple;
	}
}