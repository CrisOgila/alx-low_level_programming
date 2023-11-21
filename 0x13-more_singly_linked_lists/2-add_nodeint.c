#include "lists.h"
/**
 * add_nodeint - Adds a new node at the begining of listint_t
 * @head:Pointer to the address of the head of the listint_t
 * @n: The integer for trhe new node to contain
 * Return: NULL, if func fails, otherwise address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
