#include "main.h"
#include <string.h>
#include <stdlib.h>


/**
 * *str_concat - Function to concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: Retrun pointer or null
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i;
	int l1 = 0;
	int l2 = 0;


	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[l1] != '\0')
	{
		l1++;
	}

	while (s2[l2] != '\0')
	{
		l2++;
	}

	p = (char *) malloc(sizeof(char) * (l1 + l2 + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];
	}


	for (i = 0; i < l2; i++)
	{
		p[i + l1] = s2[i];
	}

	p[l1 + l2] = '\0';

	return (p);
}
