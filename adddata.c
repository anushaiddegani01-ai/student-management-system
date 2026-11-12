#include "header.h"

void add_data(sll **ptr)
{
    sll *new, *temp;
    int roll = 1, found;

    new = malloc(sizeof(sll));

    if (new == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    while (1)
    {
        temp = *ptr;
        found = 0;

        while (temp != NULL)
        {
            if (temp->rollno == roll)
            {
                found = 1;
                break;
            }

            temp = temp->next;
        }

        if (found == 0)
            break;

        roll++;
    }

    new->rollno = roll;

    printf("Enter name and marks: ");
    scanf("%19s %f", new->name, &new->marks);

    if (new->marks < 0 || new->marks > 100)
    {
        printf("Invalid marks! Enter between 0 and 100\n");
        free(new);
        return;
    }

    new->next = NULL;

    if (*ptr == NULL)
        *ptr = new;
    else
    {
        temp = *ptr;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = new;
    }

    printf("Record added successfully\n");
}
~                                                                                                                                                                                                                                                                                                  
~                                                                                                                                                                                                                                                                                                  
~                                                                                                                                                                                                                                                                                                  
~                                                                                                                                                                                                                                                                                                  
~                                                                                                                                                                                                                                                                                                  
~                                                                                                                                                                                                                                                                                                  
~                                                                                                                                                                                                                                                                                                  
~                                                                                                                                                                                                                                                                                                  
~                                                                                                                                                                                                                                                                                                  
~                          