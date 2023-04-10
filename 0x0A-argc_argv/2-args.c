#include <stdio.h>
#include <stdlib.h>


/**
 *  main - func prints all arguments passed toit
 *  @argv: argument vector of pointers to strings
 *  @argc: number of arguments passed to the function
 *
 *  Return: always 0
 */

int main(int argc, char *argv[])
{

	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
