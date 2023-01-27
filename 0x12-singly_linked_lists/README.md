# 0x11 - Singly Linked Lists
## Project Requirements
- Formatted with Betty style standards
- Compiled with gcc 4.8.4 (C90) using the flags `-Wall` `-Werror` `Wextra` and `-pedantic`
- No global variables
- No more than 5 functions per file
- Allowed C standard library functions are `malloc`, `free`, and `exit`
- Function protoypes should be included in a header file called `lists.h`
- Header files should be include guarded

#### Project Data Structure
	/**
	* struct list_s - singly linked list
	* @str: string - (malloc'ed string)
	* @len: length of the string
	* @next: points to the next node
	*
	* Description: singly linked list node structure
	* for ALX project
	*/
	typedef struct list_s
	{
		char *str;
		unsigned int len;
		struct list_s *next;
	}	list_t;

## File Descriptions
**0-print_list.c:** a function that prints all the elements of a list_t list -
`size_t print_list(const list_t *h);`

**1-list_len.c:** a function that returns the number of elements in a linked list_t list - `size_t list_len(const list_t *h);`

**2-add_node.c:** a function that adds a new node at the beginning of a list_t list - `list_t *add_node(list_t **head, const char *str);`

**3-add_node_end.c:** a function that adds a new node at the end of a list_t list - `list_t *add_node_end(list_t **head, const char *str);`

**4-free_list.c:** a function that free a list_t list - `void free_list(list_t *head);`

## Author
*Jerrica Jackson* - [Twitter](http://twitter.com/gvaldiiii)
