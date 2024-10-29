#include "commands.h"

void ls(DIR *currentDir) {

	struct dirent *dir_read;

	while ((dir_read = readdir(currentDir)) != NULL) {
		printf("%s\t%d bytes\n", dir_read->d_name, dir_read->d_reclen);
	}
}