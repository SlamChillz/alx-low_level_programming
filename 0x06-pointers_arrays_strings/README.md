# C - More pointers, arrays and strings
Further learning on pointers, array and string through more tasks.
We will be building some functions similar to some built in functions.
### 0. strcat
[strcat](./0-strcat.c) a function that concatenates two strings
- This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
### 1. strncat
[strncat](./1-strncat.c) a function that concatenates two strings
- The strncat function is similar to the strcat function, except that
	- it will use at most n bytes from src; and
	- src does not need to be null-terminated if it contains n or more bytes
### 2. strncpy
[strncpy](./2-strncpy.c) a function that copies a string. Function works exactly like **strncpy**
### 3. strcmp
[strcmp](./3-strcmp.c) a function that compares two strings. Function works exactly like **strcmp**
### 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy
[Reverse array](./4-rev_array.c) a function that reverses the content of an array of integers.
### 5. Always look up
[String to uppercase](./5-string_toupper.c) a function that changes all lowercase letters of a string to uppercase
### 6. Expect the best. Prepare for the worst. Capitalize on what comes
[Capitalise string](./6-cap_string.c)  a function that capitalizes all words of a string.
- Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
### 7. Mozart composed his music not for the elite, but for everybody
[Leet encoding](./7-leet.c) a function that encodes a string into 1337
- Letters a and A should be replaced by 4
- Letters e and E should be replaced by 3
- Letters o and O should be replaced by 0
- Letters t and T should be replaced by 7
- Letters l and L should be replaced by 1
### 8. rot13
[Rot13 encoding](./rot13) a function that encodes a string using rot13
### 9. Numbers have life; they're not just symbols on paper
[Print number](./101-print_number.c) a function that prints an integer
### 10. A dream doesn't become reality through magic; it takes sweat, determination and hard work
[Magic](./102-magic.c)- add one line to [this code](https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c), so that the program prints a[2] = 98, followed by a new line
### 11. It is the addition of strangeness to beauty that constitutes the romantic character in art
[Infinite addition](./103-infinite_add.c) a function that adds two numbers
### 12. Noise is a buffer, more effective than cubicles or booth walls
[Print Buffer](./104-print_buffer.c) a function that prints a buffer
