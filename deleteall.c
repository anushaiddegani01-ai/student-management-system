#include "header.h"

void delete_all(sll **ptr)
{
    sll *temp;

    while (*ptr != NULL)
    {
        temp = *ptr;
        *ptr = (*ptr)->next;
        free(temp);
    }

    printf("All student records deleted successfully\n");
}
~                                                                                                                           
~                                                                                                                           
~           
