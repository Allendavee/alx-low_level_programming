#ifndef _MAIN_H_
#define _MAIN_H_

/*Libraries*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/*Prototypes*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/*Helper Functions*/
int _strlen(char *s);

#endif /*MAIN_H_*/
