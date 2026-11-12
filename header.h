#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
typedef struct student
{
int rollno;
char name[20];
float marks;
struct student *next;
}sll;
void add_data(sll **);
void delete_data(sll **);
void print_data(sll *);
void modify_data(sll *);
void save_data(sll *);
void sort_data(sll *);
void reverse_data(sll **);
void delete_all(sll **);
                                                                                                                           
                                                                                                                                                                                                                                                      
                                                                                                                         
                                                                                                                            