#include <stdio.h>
#include <stdlib.h>
/**
 * main - finc that prints the number of arguments passed into it
 * @argv: argument vector of pointers to strings
 * @argc: number of arguments passed to the function
 *
 * return always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	 printf("%d\n", argc - 1);
	 return (0);

}
