#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: Pointer to a pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
size_t size = 0;
listint_t *current, *tmp;

if (h == NULL || *h == NULL)
return (size);

current = *h;
while (current != NULL)
{
size++;
tmp = current;
current = current->next;
if (tmp <= current)
{
*h = NULL;
return (size);
}
free(tmp);
}

*h = NULL;
return (size);
}
