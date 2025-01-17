/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nporras- <nporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:05:58 by nporras-          #+#    #+#             */
/*   Updated: 2025/01/17 13:15:57 by nporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *s)
{
	int	res;

	res = 0;
	while (*s)
		res = res * 10 + (*s - '0');
	return (res);
}

int	is_prime(int n)
{
	int nb = 2;

	if (n <= 1)
		return (0);
	while (nb * nb <= n)
	{
		if (n % nb == 0)
			return (0);
		nb++;
	}
	return (1);
}

void	put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int nbr = ft_atoi(argv[1]);
		int sum = 0;
		while (nbr > 0)
		{
			if (is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		put_nbr(sum);
		
	}
	if (argc != 2)
		put_nbr(0);
	write(1, "\n", 1);
	return (0);
}