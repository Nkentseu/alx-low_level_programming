# 0x00. C - Hello, World

General
	* Why C programming is awesome
	* Who invented C
	* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
	* What happens when you type gcc main.c
	* What is an entry point
	* What is main
	* How to print text using printf, puts and putchar
	* How to get the size of a specific type using the unary operator sizeof
	* How to compile using gcc
	* What is the default program name when compiling with gcc
	* What is the official C coding style and how to check your code with betty-style
	* How to find the right header to include in your source code when using a standard library function
	* How does the main function influence the return value of the program

## [0. Preprocessor](0-preprocessor "preprocessor")
Write a script that runs a C file through the preprocessor and save the result into another file.

* The C file name will be saved in the variable $CFILE
* The output should be saved in the file c
	julien@ubuntu:~/c/0x00$ cat main.c 
	#include <stdio.h>
	
	/**
	 * main - Entry point
	 *
	 * Return: Always 0 (Success)
	 */
	int main(void)
	{
	    return (0);
	}
	julien@ubuntu:~/c/0x00$ export CFILE=main.c
	julien@ubuntu:~/c/0x00$ ./0-preprocessor 
	julien@ubuntu:~/c/0x00$ tail c
	# 942 "/usr/include/stdio.h" 3 4

	# 2 "main.c" 2


	# 3 "main.c"
	int main(void)
	{
	 return (0);
	}
	julien@ubuntu:~/c/0x00$ 

## [1. Compiler](1-compiler "compile")

Write a script that compiles a C file but does not link.

* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .o instead of .c.

## [2. Assembler](2-assembler "assembler")
Write a script that generates the assembly code of a C code and save it in an output file.

* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .s instead of .c.

## [3. Name](3-name "name")
Write a script that compiles a C file and creates an executable named cisfun.

* The C file name will be saved in the variable $CFILE
