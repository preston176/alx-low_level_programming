#include "lists.h"
/**
 * add_dnodeint- insert new node at the beginnig
 * @head: is pointer to direction of the head
 * @n:The data integer
 * Return: The new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_mem;

	new_mem = malloc(sizeof(dlistint_t));

	if (new_mem == NULL)
		return (NULL);

	new_mem->n = n;
	new_mem->prev = NULL;
	new_mem->next = *head;

	if (*head != NULL)
		(*head)->prev = new_mem;
	*head = new_mem;

	return (new_mem);
}