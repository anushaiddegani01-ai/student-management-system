
#include "header.h"
//#include<stdlib>
int main()
{
    sll *headptr = NULL;
    char op;

    while (1)
    {
        printf("\n******** STUDENT RECORD MENU ********\n");
        printf("a/A : Add new record\n");
        printf("d/D : Delete a record\n");
        printf("s/S : Print the Data\n");
        printf("m/M : Modify a record\n");
        printf("v/V : Save records\n");
        printf("t/T : Sort the list\n");
        printf("l/L : Delete all records\n");
        printf("r/R : Reverse the list\n");
        printf("e/E : Exit\n");

        scanf(" %c", &op);

        switch (op)
        {
            case 'a':
            case 'A':
                add_data(&headptr);
                break;


            case 'd':
            case 'D':
                delete_data(&headptr);
                break;

            case 's':
            case 'S':
                print_data(headptr);
                break;

            case 'm':
            case 'M':
                modify_data(headptr);
                break;

            case 'v':
            case 'V':
                save_data(headptr);
                break;

            case 't':
            case 'T':
                sort_data(headptr);
                break;

            case 'l':
            case 'L':
                delete_all(&headptr);
                break;

            case 'r':
            case 'R':
                reverse_data(&headptr);
                break;


            case 'e':
            case 'E':
                printf("Exit without saving\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
                                                                                                                                                                                                        1,1           All
