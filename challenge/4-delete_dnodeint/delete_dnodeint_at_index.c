#include "lists.h"
#include <stdlib.h>

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    unsigned int position;

    if (head == NULL || *head == NULL)
        return -1;

    current = *head;
    position = 0;
    while (current != NULL && position < index)
    {
        current = current->next;
        position++;
    }

    if (current == NULL)
        return -1;

    if (current->prev != NULL)
        current->prev->next = current->next;
    else
        *head = current->next;

    if (current->next != NULL)
        current->next->prev = current->prev;

    free(current);
    return 1;
}
