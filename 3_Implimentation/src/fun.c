#include "fun.h"

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
         break;
     }
     return 0;
 }

 int modifyrecord()
{
    int i,id;
    printf("Enter employee ID to modify the employee record\n");
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
     printf("\n************************************************************\n");
     printf("\n employee ID\temployee name\temployee age\temployee salary\n");
     printf("\n*************************************************************\n");
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


 