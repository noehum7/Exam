/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nporras- <nporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:03:52 by nporras-          #+#    #+#             */
/*   Updated: 2025/01/29 14:13:01 by nporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

static int count_words(char *s)
{
	int count = 0;
	int flag = 0;

	while (*s)
	{
		if (!is_separator(*s) && !flag)
		{
			flag = 1;
			count++;
		}
		else if (is_separator(*s))
			flag = 0;
		s++;
	}
	return (count);
}

static int is_empty(char *str)
{
    if (!str || !*str) // Verificar string nulo o vacío
        return (1);
    while (*str) //Verificar si solo hay espacios
    {
        if (!is_separator(*str))
            return (0);
        str++;
    }
    return (1);
}

char    **ft_split(char *str)
{
	char **result;
	int i = 0;
	int j;
	int word_start;
	int word_count;

	if (is_empty(str))
    {
        result = malloc(sizeof(char *));
        if (!result)
            return (NULL);
        result[0] = NULL; //Array terminado en nulo
        return (result);
    }
    word_count = count_words(str);
	result = malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	while (*str)
	{
		// Saltar separadores
		while (*str && is_separator(*str))
			str++;
		// Encontrar longitud de palabra
		word_start = 0;
		while (str[word_start] && !is_separator(str[word_start]))
			word_start++;
		if (word_start > 0)
		{
			// Asignar memoria y copiar palabra
			result[i] = malloc(word_start + 1);
			if (!result[i])
				return (NULL);
			j = 0;
			while (j < word_start)
			{
				result[i][j] = str[j];
				j++;
			}
			result[i][j] = '\0';
			i++;
			str += word_start;
		}
	}
	result[i] = NULL;
	return (result);
}