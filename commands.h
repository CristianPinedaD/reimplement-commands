#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

// Consumes an array of file names and outputs the number of lines in them.
void nl(char *fileNames[], int size);

/***********************
 * void cat(char*)
 * Consumes a file name and outputs its content to the terminal
 * param1: String containing the file name
 * 
 * 
 * 
 * 
 * Note: Buffer size for each line is 1024 chars. 
 ***********************/
void cat(char *fileName);

// Consumes a file name and copies it to a new file
void cp(char *fileName, char *newFileName);

/*****************
 * void ls(DIR*)
 * Consumes a directory pointer and outputs its contents to the console.
 * param1: Pointer to our directory.
 *
 * 
 * Note: Will also display the sizes of the directories '.' and '..' (to be fixed)
 * Source:
 * https://medium.com/@codingcamel/learning-in-public-coding-ls-in-c-part-2-3dd1f78dacfc
 *****************/
void ls(DIR*); 