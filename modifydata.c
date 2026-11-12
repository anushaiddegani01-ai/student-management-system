#include "header.h"

void modify_data(sll *ptr)
{
    int roll;
    sll *temp = ptr;
    char name[20];
    float marks;

    if (ptr == NULL)
    {
        printf("No records found\n");
        return;
    }

    printf("Enter roll number: ");
    scanf("%d", &roll);

    while (temp != NULL)
    {
        if (temp->rollno == roll)
            break;

        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Record not found\n");
        return;
    }

    printf("Enter new name and marks: ");
    scanf("%s %f", name, &marks);

    if (marks < 0 || marks > 100)
    {
        printf("Invalid marks! Enter between 0 and 100\n");
        return;
    }

    strcpy(temp->name, name);
    temp->marks = marks;

    printf("Record modified successfully\n");
}
