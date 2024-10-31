#include "commands.h"

void ls(DIR *currentDir) {

	struct dirent *dir_read;

	while ((dir_read = readdir(currentDir)) != NULL) {
		printf("%s\t%d bytes\n", dir_read->d_name, dir_read->d_reclen);
	}
}

void cat(char *fileName) {
	FILE *file = fopen(fileName, "r");

	char buffer[1024];

	while ((fgets(buffer, sizeof(buffer), file)) != NULL) {
		printf("%s", buffer);
	}

	fclose(file);
}

void cp(char *fileName, char *newFileName) {
	FILE *oldFile = fopen(fileName, "r");
	if (oldFile == NULL) { // Check if the source file was opened successfully
		printf("Error: Could not open file %s for reading.\n", fileName);
		return;
	}

	FILE *newFile = fopen(newFileName, "w");
	if (newFile == NULL) { // Check if the destination file was opened successfully
		printf("Error: Could not open file %s for writing.\n", newFileName);
		fclose(oldFile); // Close the source file before returning
		return;
	}

	char buffer[1024];

	while ((fgets(buffer, sizeof(buffer), oldFile)) != NULL) {
		fprintf(newFile, "%s", buffer);
	}

	fclose(oldFile);
	fclose(newFile);
}

void nl(char *fileNames[], unsigned int size) {

	int masterCount = 0;
	for (int i = 0; i < size; i++) {
		FILE *file = fopen(fileNames[i], "r");

		if (file == NULL) { // Check if the file was opened successfully
			printf("Error: Could not open file %s\n", fileNames[i]);
			continue; // Skip to the next file if this one couldn't be opened
		}

		int count = 0;

		char buffer[1024];

		while ((fgets(buffer, sizeof(buffer), file)) != NULL) {
			count++;
		}

		masterCount += count;
		printf("There are %d lines in %s", count, fileNames[i]);
	}

	printf("%d files processed, %d lines read", size, masterCount);
}