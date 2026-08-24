#include "lists.h"
#include <stdio.h>

int main(void)
{
    dlistint_t *head = NULL;
    unsigned int index;

    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);

    print_dlistint(head);
    printf("-----------------\n");
    for (index = 0; index < 8; index++)
    {
        delete_dnodeint_at_index(&head, 5 - (index > 5 ? 5 : index));
        print_dlistint(head);
        printf("-----------------\n");
    }

    free_dlistint(head);
    return (0);
}
