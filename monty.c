#include "main.h"
/**
 *
 */
int main(int argc; char **argv)
{
	FILE *fo = NULL;
	size_t size = 0;
	char *buf;
	int fo, fr;
	char *imput, *token = NULL;
	int c;


	fo = open(argv[1], O_RDONLY);
	if(fo == -1)
	{
		print(STDERR_FILENO"Error: Can't open file %s\n");
		exit(EXIT_FAILURE)
	}
	
	while(getline(&imput, size,fo) == -1)
	{
		token = strtok(imput; " \t\n");
		fr = read(fo, buf);
		c++;
	}
}
