#include<stdio.h>
#include<unistd.h>
/**
 * main - prints all the argument in a function
 *
 * Return- always 0;
 */
int main(int ac, char **av)
{
	int counter = 1;	
	(void) ac;

	while (*(*av + counter) != '\0')
	{	
		printf("%d\n", *(*av + counter));
		counter++;
	}

	return(0);
}

