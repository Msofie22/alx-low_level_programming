#include <stdio.h>
/**
*main - Prints the alaphabet
*
*Return: Always (0)
**/
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (int i = 0; i < 52; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);

}
