#include <stdio.h>
#include "main.h"
/**
*main - print the number of agruments passed to the program
*@argc: number of agruments
*@argv: array of agruments
*Return: Always 0
*/

int main(int argc, char *argv[])
{
(void)argv; /*lgnore argv*/
printf("%d\n", argc - 1);
return (0);
}
