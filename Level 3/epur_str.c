/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nporras- <nporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:23:31 by nporras-          #+#    #+#             */
/*   Updated: 2025/01/17 13:34:47 by nporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **av)
{
	int i;
	int space;
	
	if (argc == 2)
	{
		space = 0;
		i = 0;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i])
		{
			if ((av[1][i] == ' ' || av[1][i] == '\t'))
				space = 1;
			if ((!(av[1][i] == ' ' || av[1][i] == '\t')))
			{
				if (space)
					write(1, " ", 1);
				space = 0;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}