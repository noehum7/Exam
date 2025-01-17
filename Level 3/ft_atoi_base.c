/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nporras- <nporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:23:54 by nporras-          #+#    #+#             */
/*   Updated: 2025/01/17 14:55:04 by nporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int str_base)
{
	int result;
	int sign;
	int i;
	int c;

	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			c = str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			c = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			c = str[i] - 'A' + 10;
		else
			break ;
		result = result * str_base + c;
		i++;
	}
	return (result * sign);
}