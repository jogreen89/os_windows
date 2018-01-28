#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void validate_input(char *line, char **argv)
{
	while (*line != '\0')
	{
		while (*line == ' ' || *line == '\t' || *line == '\n')
		{
			*line++ = '\0';
		}
		*argv++ = line;
		while (*line != '\0' && *line != ' ' && *line != '\n')
		{
			line++;
		}
	}
}

int main(int argc, char **argv)
{
	char line[1024];
	bool status = true;

	while (status)
	{
		printf("osh> ");
		gets_s(line);
		validate_input(line, argv);
		printf("DEBUG");

		if (strcmp(argv[0], "exit"))
		{
			exit(0);
		}
		else
		{
			printf("Okay");
			// launch_osh(argv);
		}
		
	}
}

/*
void launch_osh(char **argv)
{
	// pid
}
*/