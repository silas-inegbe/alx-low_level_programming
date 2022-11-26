/**
 * struct lists_s i singly linked list
 * @str: string: (malloc string)
 * @len: length of string
 * @next: points tom the next node
 *
 * Description: singly linked list node structure
 * for alx project
 * All files in this project use this format 
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_s;
