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
//  Description     : It prints a matrix where even rows display positive numbers
//                    even rows display negative numbers
//  Input           : Int, Int
//  Output          : Void
//  Author          : Atharva Vinod Gawade
//  Date            : 23/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow , int iCol)
{
    int i = 0, j = 0;
    
    for(i = 0; i < iRow; i++)
    {
        if(i % 2 != 0)      // Odd row
        {
            for(j = -1; j >= -iCol; j--)
            {
                printf("%d\t", j);
            }
        }
        else               // Even row
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", j);
            }
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

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled successfully by the application
//
//  Input : 4 5
//  Output :
//      1   2   3   4   5
//      -1  -2  -3  -4  -5
//      1   2   3   4   5
//      -1  -2  -3  -4  -5
//
//  Input : 3 3
//  Output :
//      1   2   3
//      -1  -2  -3
//      1   2   3
//
///////////////////////////////////////////////////////////////////////////////////////
