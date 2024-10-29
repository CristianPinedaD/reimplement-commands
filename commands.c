#include "commands.h"

void ls(DIR *currentDir) {

	struct dirent *dir_read;

	while ((dir_read = readdir(currentDir)) != NULL) {
		printf("%s\t%d bytes\n", dir_read->d_name, dir_read->d_reclen);
	}
}

void cat(char* fileName) {
	FILE *file = fopen(fileName, "r");

	char buffer[1024];

	while ((fgets(buffer, sizeof(buffer), file)) != NULL) {
		printf("%s\n", buffer); 
	}

	fclose(file); 
}