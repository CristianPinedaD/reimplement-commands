#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

// Consumes an array of file names and outputs the number of lines in them.
void nl(char *fileNames[]);

// Consumes a file name and outputs its content to the terminal
void cat(char *fileName);

// Consumes a file name and copies it to a new file
void cp(char *fileName, char *newFileName);

/*****************
 * void ls(DIR*)
 * Consumes a directory pointer and outputs its contents to the console.
 * param1: Pointer to our directory.
 *
 * 
 * 
 * Source:
 * https://medium.com/@codingcamel/learning-in-public-coding-ls-in-c-part-2-3dd1f78dacfc
 *****************/
void ls(DIR*); 