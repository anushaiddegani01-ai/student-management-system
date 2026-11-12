#include "header.h"

void sort_data(sll *head)
{
    sll *temp, *next;
    sll t;
    int choice;

    printf("1. Sort by name\n");
    printf("2. Sort by marks\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice != 1 && choice != 2)
    {
        printf("Invalid choice\n");
        return;
    }

    temp = head;

    while(temp != NULL)
    {
        next = temp->next;

        while(next != NULL)
        {
            if((choice == 1 && strcmp(temp->name, next->name) > 0) ||
               (choice == 2 && temp->marks > next->marks))
            {
                t = *temp;

                temp->rollno = next->rollno;
                strcpy(temp->name, next->name);
                temp->marks = next->marks;

                next->rollno = t.rollno;
                strcpy(next->name, t.name);
                next->marks = t.marks;
            }

            next = next->next;
        }

        temp = temp->next;
    }

    printf("Records sorted successfully\n");
}
                                                                                                                                                
                                                                                                                                                
                                                                                                                                              
                                                                                                                                                                                                                                                                                                
                                                                                                                                              
                 