#include "header.h"

void save_data(sll *ptr)
{
    FILE *fp = fopen("student.dat", "w");

    if (fp == NULL)
    {
        printf("File opening failed\n");
        return;
    }

    while (ptr != NULL)
    {
        fprintf(fp, "%d %s %.2f\n",
                ptr->rollno, ptr->name, ptr->marks);
        ptr = ptr->next;
    }

    fclose(fp);
    printf("Records saved successfully\n");
}
~                                                                                                                                                
~                                                                                                                                                
~                                                                                                                                                
~                                                                                                                                                
~                                                                                                                                                
~                                                                                                                                                
~                 