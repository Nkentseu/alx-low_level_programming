# 0x0F. C - Function pointers
General

       * What are function pointers and how to use them
       * What does a function pointer exactly hold
       * Where does a function pointer point to in the virtual memory

## [0. What's my name](0-print_name.c "print_name")
Write a function that prints a name.

* Prototype: void print_name(char *name, void (*f)(char *));

## [1. If you spend too much time thinking about a thing, you'll never get it done](1-array_iterator.c "array")
Write a function that executes a function given as a parameter on each element of an array.

* Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
* where size is the size of the array
* and action is a pointer to the function you need to use

