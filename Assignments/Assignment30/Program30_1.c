///////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Description     : It prints a unique square matrix                 
//  Input           : Int, Int
//  Output          : Void
//  Author          : Atharva Vinod Gawade
//  Date            : 23/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow , int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid Input\n");
        printf("Row number and column number should be same\n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {         
        for(j = 1; j <= iCol; j++)
        {
            if(i > j)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }
} // End of Pattern

//  Time Complexity : O(n**2)

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0 , iValue2 = 0 ;

    printf("Enter the number of rows and columns : ");
    scanf("%d %d", &iValue1 , &iValue2);

    Pattern(iValue1 , iValue2);

    return 0 ;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled successfully by the application
//
//  Input : 4 4
//  Output :
//      #   #   #   #
//      *   #   #   #
//      *   *   #   #
//      *   *   *   #
//
//  Input : 5 5
//  Output :
//      #   #   #   #   #
//      *   #   #   #   #
//      *   *   #   #   #
//      *   *   *   #   #
//      *   *   *   *   #
//
//  Input : 3 4
//  Output :
//      Invalid Input
//      Row number and column number should be same
//
///////////////////////////////////////////////////////////////////////////////////////