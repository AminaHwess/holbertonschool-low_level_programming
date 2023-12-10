#ifndef IO
#define IO
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>


ssize_t read_textfile(const char *filename, size_t letters);

#endif