///////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Title           : Prints unique square matrix
//  Description     : It prints a matrix increasing numbers starting
//                    from 1 without resetting in each row
//  Input           : Int, Int
//  Output          : Void
//  Author          : Atharva Vinod Gawade
//  Date            : 23/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow , int iCol)
{
    int i = 0, j = 0;
    int iCount = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iCount);
            iCount++;
        }
        printf("\n");
    }
} // End of Pattern

//  Time Complexity : O(n*m)
//                  :O(n**2)

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue1 = 0 , iValue2 = 0 ;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &iValue1 , &iValue2);

    Pattern(iValue1 , iValue2);

    return 0 ;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled successfully by the application
//
//  Input : 3 4
//  Output :
//      1   2   3   4
//      5   6   7   8
//      9   10  11  12
//
//  Input : 4 3
//  Output :
//      1   2   3
//      4   5   6
//      7   8   9
//      10  11  12
//
///////////////////////////////////////////////////////////////////////////////////////
