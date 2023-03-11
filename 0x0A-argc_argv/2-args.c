#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
/*Declaring variables*/
int count = 0

if (argc > 0)
{
/*WHILE - Print each argument*/
while (count < argc)
{
printf("%s\n", argv[count]);
}
}
return (0);
}
