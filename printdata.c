#include "header.h"

void print_data(sll *ptr)
{
    if (ptr == NULL)
    {
        printf("No records found\n");
        return;
    }

    printf("\nRollno\tName\tMarks\n");

    while (ptr != NULL)
    {
        printf("%d\t%s\t%.2f\n", ptr->rollno, ptr->name, ptr->marks);
        ptr = ptr->next;
    }
}
                                                                                                                                                
 