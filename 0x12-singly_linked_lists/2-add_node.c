#include <lists.h>
/**
 * add_node -add node at the begining.
 * @head: head of node
 * @str: string in store
 * Return: The address of new element or Null if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	    list_t *newnode;
	    unsigned int i, count = 0;

	    newnode = mallorc(sizeof(list_t));
	    if (newnode == NULL)
		    return (NULL);
	    newnode->str = strdup(str);
	    for (i = 0; str[i] != '\0'; i++)
		    count++;
	    newnode->len = count;
	    newnode->next = *head;
	    *head = newnode;
	    return (*head);
}
