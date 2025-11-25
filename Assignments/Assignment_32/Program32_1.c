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
//  Description     : Prints a pattern where the reverse diagonal contains '#'
//                    and  other positions contain '*'
//  Input           : Int, Int
//  Output          : Void
//  Author          : Atharva Vinod Gawade
//  Date            : 25/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{

    if(iRow != iCol)
    {
        printf("Invalid Input\n");
        printf("Number of rows and columns must be equal\n");
        return;
    }

    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i + j) == (iCol + 1))
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

//  Time Complexity : O(n**2)

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
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
//  Testcases handled successfully by the application
//
//  Input : 6 6
//  Output :
//      *   *   *   *   #   *
//      *   *   *   #   *   *
//      *   *   #   *   *   *
//      *   #   *   *   *   *
//      #   *   *   *   *   *
//      *   *   *   *   *   *
//
//
///////////////////////////////////////////////////////////////////////////////////////
