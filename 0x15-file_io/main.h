#ifndef __MAIN_H__
#define __MAIN_H__

#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
