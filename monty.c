#include "main.h"
/**
 *
 */
int main(int argc; char **argv)
{
	char *buf;
	int fo, fr;

	fo = open( argv[1], O_RDONLY);
	if(fo == -1)
	{
		print(STDERR_FILENO"Error: Can't open file %s\n");
		exit(EXIT_FAILURE)
	}
	else
		fr = read(fo, buf);
		
}
