#include "lists.h"
#include <stdlib.h>

dlistint_t *add_dnodeint_end(dlistint_t **list, const int n)
{
    dlistint_t *new_node;
    dlistint_t *current;

    if (list == NULL)
        return NULL;

    new_node = malloc(sizeof(*new_node));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->next = NULL;
    new_node->prev = NULL;

    if (*list == NULL)
    {
        *list = new_node;
        return new_node;
    }

    current = *list;
    while (current->next != NULL)
        current = current->next;

    current->next = new_node;
    new_node->prev = current;
    return new_node;
}
