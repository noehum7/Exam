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

int is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *s)
{
	int count = 0;
	int flag = 0; // 0 = entre palabras, 1 = dentro de palabra

	while (*s)
	{
		// Si encontramos un carácter NO separador Y no estamos dentro de una palabra. Solo cuenta al inicio
		if (!is_separator(*s) && !flag)
		{
			flag = 1;
			count++; // "hello" → count = 1
		}
		// Si encontramos un separador
		else if (is_separator(*s))
			flag = 0; // Marcamos que estamos fuera de una palabra para contar la siguiente
		s++;
	}
	return (count);
}

char    **ft_split(char *str)
{
    char **result; //Array donde guardaremos las palabras
    int i = 0; // Índice para el array de palabras
    int word_len; //Longitud de cada palabra
    int word_count; //Nº total palabras

    // Comprobación inicial de string null
    if (!str)
        return (NULL);
    
	// Contar palabras y reservar memoria para array de punteros
    word_count = count_words(str);
    if (!(result = malloc(sizeof(char *) * (word_count + 1))))
        return (NULL);
	// Vamos a procesar cada palabra
    while (*str)
    {
		// Saltamos separadores iniciales
        while (*str && is_separator(*str))
            str++;
		// Calculamos longitud de la palabra actual
        word_len = 0;
        while (str[word_len] && !is_separator(str[word_len]))
            word_len++;
		// Si la palabra es válida
        if (word_len)
        {
			// Reservamos memoria para la palabra
            if (!(result[i] = malloc(word_len + 1)))
                return (NULL);
			// Copiamos caracteres de la palabra
            for (int j = 0; j < word_len; j++)
                result[i][j] = str[j];
			// Terminamos string con caracter nulo y avanzamos el índice para la siguiente palabra
            result[i++][word_len] = '\0';
            str += word_len; //Avanza el puntero str después de procesar una palabra
        }
    }
	// Terminar el array con NULL
    result[i] = NULL;
    return (result);
}