#include "commands.h"



int main(int argc, char* argv[]) {

    // // Term should look like ./a.out . 
	// DIR *myDir = opendir(argv[1]);

	// // opendir returns NULL on error, so we handle the error...
	// if (myDir == NULL) {
	// 	perror("Error while trying to open directory\n");
	// 	return 1;
	// }

	// ls(myDir);

	// closedir(myDir);

	// cat("test.txt");

	char command[200]; 
	char argument[200]; 

	fscanf("user@computer$",&command, &argument);

	if (command == "ls") {
		ls(argument);
	}
	if (command == "cat") {
		cat(argument); 
	}
}