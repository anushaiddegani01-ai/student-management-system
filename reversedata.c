#include "header.h"

void reverse_data(sll **headptr)
{
    sll *prev = NULL, *current = *headptr, *next;

    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *headptr = prev;

    printf("Records reversed successfully\n");
}
~                                                                                                                                                
~                                                                                                                                                
~       