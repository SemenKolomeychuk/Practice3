#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main(){
	int fd = open("file1.txt", O_WRONLY, O_CREAT);
	close(1);
	dup(fd);
	close(fd);
	char line[100];
	fgets(line, 100, stdin);
	printf("%s", line);
	return 0; 
}
