/**
 * @file employee.c
 * @author Shilpa Hotagi
 * @brief 
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
   
#include<stdio.h>
#include<stdlib.h>
#include<curses.h>
#include<string.h>
struct employee
{
    int id;
    char name[50];
    int age;
    float salary;
};
struct employee e[100];
int key=0;

int addrecord();  // add record
int deleterecord(); // delete record
int searchrecord(); // search record
int displayrecord(); // display record
int modifyrecord(); // modify record


 int addrecord()
 {
     char another='y';
     while(another=='y')
     {
         printf("\nEnter ID: ");
         scanf("%d",&e[key].id);
         printf("\nEnter Name: ");
         scanf("%s",e[key].name);
         printf("\nEnter Age: ");
         scanf("%d",&e[key].age);
         printf("\nEnter Salary: ");
         scanf("%g",&e[key].salary);
         key++;
     }
     return 0;
 }

int modifyrecord()
{
    int i,id;
    printf("Enter employee ID to delete the employee record\n");
    scanf("%d",&id);
    for(i=0;i<key;i++)
    {
        if(e[i].id==id)
        {
            printf("\nEnter ID: ");
            scanf("%d",&e[i].id);
            printf("\nEnter Name: ");
            scanf("%s",e[i].name);
            printf("\nEnter Age: ");
            scanf("%d",&e[i].age);
            printf("\nEnter Salary: ");
            scanf("%g",&e[i].salary);
            break;
        }
    }
    return 0;
}

int searchrecord()
{
    int i,id,flag=0;
    printf("Enter employee ID to search\n");
    scanf("%d",&id);
    for(i=0;i<key;i++)
    {
        if(e[i].id==id)
        {
           flag=1;
           break;
        }
    }
    if(flag==1)
       printf("\n%d\t\t %s\t\t %d\t\t %g\n",e[i].id,e[i].name,e[i].age,e[i].salary);
    else
        printf("Record not found\n");
        return 0;
}

int displayrecord()
 {
     int i;
     printf("\n employee ID\temployee name\temployee age\temployee salary\n");
     for(i=0;i<key;i++)
     {
          printf("\n%d\t\t %s\t\t %d\t\t %g\n",e[i].id,e[i].name,e[i].age,e[i].salary);
     }
     return 0;
}

 
int deleterecord()
{
    int i,id;
    printf("Enter employee ID to delete the employee record\n");
    scanf("%d",&id);
    for(i=0;i<(key-1);i++)
    {
        if(e[i].id==id)
        {
            e[i].id=e[i+1].id;
            strcpy(e[i].name,e[i+1].name);
            e[i].age=e[i+1].age;
            e[i].salary=e[i+1].salary;
            //break;
        }
    }
    printf("\n Deleted\n");
    key=key-1;
    return 0;
}


 
int main()
{
    int choice;
    printf("\n\n\n**********************EMPLOYEE RECORDS*************************\n");
    while(1)
    {
        printf("\n 1.Add Record\n\n 2.Modify Record\n\n 3.Search Record\n\n 4.Display Record\n\n 5.Delete Record\n\n 6.Exit\n\n");
        printf("Enter the choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: addrecord();
            break;
            case 2: modifyrecord();
            break;
            case 3: searchrecord();
            break;
            case 4: displayrecord();
            break;
            case 5: deleterecord();
            break; 
            case 6: exit(0);
            break;
            printf("********************Thank You***********************");
            default:
                printf("INVALID CHOICE\n");
        }
    }
    return 0;
}
 