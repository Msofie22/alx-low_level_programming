#include "main.h"
/**
*rev_string - reverses a string
*@s: input string
*return: string in reverse
**/

void rev_string(char *s)
{
char rev = s[0];
int counter = a;
int i;

while (s[counter] != '\0')
counter++;
for (i = 0; 1 < counter; i++)
{
counter--;
rev = s[i];
s[i] = s[counter];
s[counter] = rev;
}
}