#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

// Consumes an array of file names and outputs the number of lines in them.
void nl(char *fileNames[]);

// Consumes a file name and outputs its content to the terminal
void cat(char *fileName);

// Consumes a file name and copies it to a new file
void cp(char *fileName, char *newFileName);

// Outputs the list of files at the current directory.
void ls(DIR* currentDir); 