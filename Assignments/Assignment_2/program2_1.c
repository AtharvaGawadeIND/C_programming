////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name   :   Display
//  Description     :   It is used to display '*' n times
//  Input           :   Int
//  Output          :   void      
//  Author          :   Atharva Vinod Gawade
//  Date            :   23/10/2025
// 
////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)                         
    {
        iNo = -iNo;
    }

    while(iCnt < iNo)                 
    {
        printf(" * ");
        iCnt++;
    }
} 

////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                    

    printf("Enter number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
// 
//  Input : 5       Output : * * * * *
//  Input : 2       Output : * *
//  Input : 0       Output : 
//  Input : -5      Output : * * * * *
// 
////////////////////////////////////////////////////////////////