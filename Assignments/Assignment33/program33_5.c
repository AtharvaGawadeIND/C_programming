/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : DisplaySchedule
//  Description :   It displays exam timing by taking division input (A,B,C,D)
//  Input :         char
//  Output :        void
//  Author :        Atharva Vinod Gawade
//  Date :          28/11/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char ch)
{
    if((ch=='a' || ch=='A'))
    {
        printf("Your exam is at 7 AM\n");
    }
    else if((ch=='b' || ch=='B'))
    {
        printf("Your exam is at 8.30 AM\n");
    }
    else if((ch=='c' || ch=='C'))
    {
        printf("Your exam is at 9.20 AM\n");
    }
    else if((ch=='d' || ch=='D'))
    {
        printf("Your exam is at 10.30 AM\n");
    }
    else
    {
        printf("Invalid Input\n");
    }
}   // End of DisplaySchedule

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = {'\0'};

    printf("Enter your division:\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
//
//  Input:
//  Enter your division:
//  a
//  Output: Your exam is at 7 AM
//
//  Input:
//  Enter your division:
//  B
//  Output: Your exam is at 8.30 AM
//
//  Input:
//  Enter your division:
//  d
//  Output: Your exam is at 10.30 AM
//
//  Input:
//  Enter your division:
//  t
//  Output: Invalid Input
//
//  Input:
//  Enter your division:
//  *
//  Output: Invalid Input
//
/////////////////////////////////////////////////////////////////////////////////////////////////