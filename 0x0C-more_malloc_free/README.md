# 0x0C. C - More malloc, free
General

        * How to use the exit function
        * What are the functions calloc and realloc from the standard library and how to use them

## [0. Trust no one](0-malloc_checked.c "mc")
Write a function that allocates memory using malloc.

* Prototype: void *malloc_checked(unsigned int b);
* Returns a pointer to the allocated memory
* if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98

