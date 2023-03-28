#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 *rev_string - reverse function.
 *@s: value to be evaluate.
 *Return: not.
 */

void rev_string(char *s)
{

int i;
int length;
int middle;
int tmp;



length = strlen(s);
middle = length / 2;

for (i = 0; i < middle; i++)
{
tmp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = tmp;
}

}
