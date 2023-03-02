# 0x06. C - More pointers, arrays and strings
General

	* What are pointers and how to use them
	* What are arrays and how to use them
	* What are the differences between pointers and arrays
	* How to use strings and how to manipulate them
	* Scope of variables

## [0. strcat](0-strcat.c "concataine")
Write a function that concatenates two strings.

* Prototype: char *_strcat(char *dest, char *src);
* This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
* Returns a pointer to the resulting string dest
FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.


## [1. strncat](1-strncat.c "nconcat")
Write a function that concatenates two strings.

* Prototype: char *_strncat(char *dest, char *src, int n);
* The _strncat function is similar to the _strcat function, except that
	* it will use at most n bytes from src; and
	* src does not need to be null-terminated if it contains n or more bytes
* Return a pointer to the resulting string dest
FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.

