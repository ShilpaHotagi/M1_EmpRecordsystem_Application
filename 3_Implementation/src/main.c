/**
 * @file main.c
 * @author  Shilpa Hotagi
 * @brief 
 * @version 0.1
 * @date 2022-02-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "fun.h" 
#include<stdio.h>
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
