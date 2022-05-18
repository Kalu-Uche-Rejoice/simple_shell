#define _GNU_SOURCE
#include<stdio.h>
#include<stdlib.h>
/**
 * main - gets user input
 * 
 * Return: always 0
 */
int main(int argc, char *argv[])
{

	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	printf("$");
	while((nread = getline(&line, &len, stdin)) != -1)
	{
		fwrite(line, nread, 1, stdout);
	}
	free(line);
	exit(EXIT_SUCCESS);
}
