#include "header.h"

void delete_data(sll **ptr)
{
    sll *temp, *prev;
    int choice, sub_choice, count, target_roll = 0;
    int roll, mode;
    char name[20];
    float marks;

    if (*ptr == NULL)
    {
        printf("No records found\n");
        return;
    }

    printf("\n******** DELETE RECORD ********\n");
    printf("1. Delete by Roll Number\n");
    printf("2. Delete by Name\n");
    printf("3. Delete by Marks\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter roll number: ");
        scanf("%d", &target_roll);
        mode = 1;
    }
    else if (choice == 2)
    {
        printf("Enter student name: ");
        scanf("%19s", name);
        mode = 2;
    }
    else if (choice == 3)
    {
        printf("Enter marks: ");
        scanf("%f", &marks);
        mode = 3;
    }
else
    {
        printf("Invalid choice\n");
        return;
    }

    count = 0;
    temp = *ptr;

    while (temp != NULL)
    {
        if ((mode == 1 && temp->rollno == target_roll) ||
            (mode == 2 && strcmp(temp->name, name) == 0) ||
            (mode == 3 && temp->marks == marks))
        {
            printf("%d\t%s\t%.2f\n",
                   temp->rollno, temp->name, temp->marks);
            target_roll = temp->rollno;
            count++;
        }
        temp = temp->next;
    }

    if (count == 0)
    {
        printf("Record not found\n");
        return;
    }

    while (count > 1)
    {
        printf("\nMultiple records found!\n");

        if (mode == 2)
            printf("1. Delete by Marks\n");
        else if (mode == 3)
            printf("1. Delete by Name\n");

        printf("2. Delete by Roll Number\n");
        printf("Enter your choice: ");
        scanf("%d", &sub_choice);

        if (sub_choice == 2)
        {
            printf("Enter roll number: ");
            scanf("%d", &target_roll);
            mode = 6;
        }
else if (sub_choice == 1 && mode == 3)
        {
            printf("Enter student name: ");
            scanf("%19s", name);
            mode = 5;
        }
        else
        {
            printf("Invalid choice\n");
            return;
        }

        count = 0;
        temp = *ptr;

        while (temp != NULL)
        {
            if ((mode == 4 && strcmp(temp->name, name) == 0 &&
                 temp->marks == marks) ||
                (mode == 5 && temp->marks == marks &&
                 strcmp(temp->name, name) == 0) ||
                (mode == 6 && temp->rollno == target_roll))
            {
                if (mode != 6)
                {
                    printf("%d\t%s\t%.2f\n",
                           temp->rollno, temp->name, temp->marks);
                }
                count++;
            }
            temp = temp->next;
        }

        if (count == 0)
        {
            printf("Matching record not found\n");
            return;
        }

        if (mode == 6)
            break;
    }

    if (mode == 6)
    {
        temp = *ptr;
        while (temp != NULL && temp->rollno != target_roll)
            temp = temp->next;

        if (temp == NULL)
        {
            printf("Invalid roll number\n");
            return;
        }
    }

    temp = *ptr;
    prev = NULL;

    while (temp != NULL && temp->rollno != target_roll)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Record not found\n");
        return;
    }

    if (prev == NULL)
        *ptr = temp->next;
    else
        prev->next = temp->next;

    free(temp);

    temp = *ptr;
    roll = 1;

    while (temp != NULL)
    {
        temp->rollno = roll++;
        temp = temp->next;
    }

    printf("Record deleted successfully\n");
}