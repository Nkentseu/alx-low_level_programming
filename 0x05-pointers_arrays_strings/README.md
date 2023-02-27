# 0x05. C - Pointers, arrays and strings
General

	* What are pointers and how to use them
	* What are arrays and how to use them
	* What are the differences between pointers and arrays
	* How to use strings and how to manipulate them
	* Scope of variables

## [0. 98 Battery st.](0-reset_to_98.c "reset")
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

* Prototype: void reset_to_98(int *n);

## [1. Don't swap horses in crossing a stream](1-swap.c "swap")
Write a function that swaps the values of two integers.

* Prototype: void swap_int(int *a, int *b);

## [2. This report, by its very length, defends itself against the risk of being read](2-strlen.c "leng")
Write a function that returns the length of a string.

* Prototype: int _strlen(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

## [3. I do not fear computers. I fear the lack of them](3-puts.c "puts")
Write a function that prints a string, followed by a new line, to stdout.

* Prototype: void _puts(char *str);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.

## [4. I can only go one way. I've not got a reverse gear](4-print_rev.c "print")
Write a function that prints a string, in reverse, followed by a new line.

* Prototype: void print_rev(char *s);
