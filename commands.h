#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>



/***********************
 * void nl (char*[], unsigned int)
 * Consumes an array of file
 * names and an unsigned integer 
 * with the size of this array.
 * 
 * Outputs the number of lines 
 * in each file to the terminal
 * and a total number of lines
 * read at the end. 
 * 
 * param1: Array containing 
 * the strings with the file 
 * names.
 * 
 * param2: Unsigned integer
 * with the size of the array
 * since C is stupid.
 * 
 ***********************/
void nl(char *fileNames[], unsigned int size);

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