#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve (starting from 0)
 *
 * Return: pointer to the nth node, or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;

while (head)
{
if (count == index)
return (head);

head = head->next;
count++;
}

return (NULL);
}
