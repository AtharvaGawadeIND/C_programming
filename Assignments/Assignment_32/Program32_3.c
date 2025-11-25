///////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Title           : Prints hollow square pattern with reverse diagonal
//  Description     : Prints a '*' on the border and reverse diagonal.
//                    Prints blank space inside the square.
//  Input           : Int, Int
//  Output          : Void
//  Author          : Atharva Vinod Gawade
//  Date            : 25/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;


    if(iRow != iCol)
    {
        printf("Invalid Input\n");
        printf("Number of rows and columns must be equal\n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            
            if((i + j) == (iCol + 1) || i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
} // End of Pattern

// Time Complexity : O(N^2)

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Sample Input / Output
//
//  Input : 6 6
//
//  Output:
//
//      *   *   *   *   *   *
//      *                   *
//      *               *   *
//      *           *       *
//      *       *           *
//      *   *   *   *   *   *
//
//
///////////////////////////////////////////////////////////////////////////////////////
