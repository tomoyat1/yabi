#include <stdio.h>
#include <stdlib.h>

char cells[300000] = {(char)0};
char *ptr = cells;
char *ip;

int main(int argc, void *argv[])
{
	if (argc != 2) {
		printf("usage: yabi filename\n");
		return 1;
	}
	
	FILE *sf;
	sf = fopen((char *)argv[1], "r");
	if (!sf) {
		printf("No such file found\n");
		return 1;
	}

	fseek(sf, 0L, SEEK_END);
	int size = ftell(sf);
	fseek(sf, 0L, SEEK_SET);

	char *source = malloc(size + 1);
	fread(source, size, 1, sf);
	source[size] = '\0';

	ip = source;
	while (*ip != '\0') {
		
		ip++;
	}

	free(source);
	return 0;
}
