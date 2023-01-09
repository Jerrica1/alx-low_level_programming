0x0B.C - More malloc, free

What you should learn from the end of this project is
at the end, you are expected to be able to explain to
anyone without the help of Google:

How to use the exit function?
What are the functions "callo" and "realloc"?
How to use them?

0. Write a function that allocates the memory using malloc.
Prototype: void
*malloc_checked(unsigned int b);
Returns a pointer to the allocated memory if malloc fails,
the malloc_checked function should cause normal process
termination with a status value of 98.

1. Write a function that concatenates two strings. The
returned pointer shall point to a newly allocated space
in memory, chich contains s1, followed by the first n bytes
of s2, and null terminated if the function fails, it should
return NULL if n is greater or equal to the length of s2 then
use the entire string s2 if NULL is pass, treat it as an empty
string.

2. Write a function that allocates memory for an array, using
malloc. The _calloc function allocates memory for an array of
nmemb elements of size bytes each and returns a pointer to the
allocated memory. The memory is set to zero if nmemb or size 0,
the _calloc returns NULL if malloc fails, then _calloc returns
NULL.

3. Write a function that creates an array of integers. The array
created should contain all the values from min (included) to max
(included), ordered from min to max. Return: the pointer to the
newly created array if min > max, return NULL if malloc fails,
return NULL
