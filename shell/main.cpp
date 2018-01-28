#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	char line[1024];
	bool status = true;

	while (status)
	{
		printf("osh> ");
		gets_s(line);
		parse(line, argv);

		if (strcmp(argv[0], "exit"))
		{
			exit(0);
		}
		else if (strcmp(argv[0], "!!"))
		{
			
		}
		
	}
}

int parse(char *line, char **argv)
{
	while (*line != '\0')
	{
		// while (*line == ' ' || *line == '\t' || *line == '\n'
	}
}

void launch_osh(char **argv)
{
	pid
}