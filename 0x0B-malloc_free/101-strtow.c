#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * count_words - concatenates all the arguments of the program
 * @str: the string
 * Return: number of words
 */

int count_words(char *str)
{
	int count = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			count++;
		}
	}
	return (count);
}

/**
 * strtow - concatenates all the arguments of the program
 * @str: argument count
 * Return: the words in the input string
 */

char **strtow(char *str)
{
	int words, i, j, k, start, len;
	char **result;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	result = (char **) malloc((words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0' && j < words)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			start = i;
			len = 0;
			while (str[i] != '\0' && str[i] != ' ')
			{
				len++;
				i++;
			}
			result[j] = (char *) malloc((len + 1) * sizeof(char));
			if (result[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(result[k]);
				free(result);
				return (NULL);
			}
			strncpy(result[j], str + start, len);
			result[j][len] = '\0';
			j++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}
