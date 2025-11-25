///////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Title           : Prints numeric border + diagonal pattern
//  Description     : For a square matrix:
//                      - First and last row print column numbers
//                      - First column always prints 1
//                      - Last column prints iCol
//                      - Diagonal prints the value of i
//                      - All inner cells remain blank
//  Input           : Int, Int
//  Output          : Void
//  Author          : Atharva Vinod Gawade
//  Date            : 25/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow , int iCol)
{
    int i = 0, j = 0;

    
    if(iRow != iCol)
    {
        printf("Invalid Input\n");
        printf("Row number and column number must be the same\n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            
            if(i == 1 || i == iRow)
            {
                printf("%d\t", j);
            }
            
            else if(j == 1)
            {
                printf("1\t");
            }
            
            else if(j == iCol)
            {
                printf("%d\t", iCol);
            }
            
            else if(i == j)
            {
                printf("%d\t", i);
            }
            
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
} // End of Pattern

// Time Complexity : O(N^2)

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function 
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0 , iValue2 = 0 ;

    printf("Enter number of rows and columns: ");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1 , iValue2);

    return 0 ;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Sample Input / Output
//
//  Input : 5 5
//
//  Output:
//
//      1   2   3   4   5
//      1   2           5
//      1       3       5
//      1           4   5
//      1   2   3   4   5
//
///////////////////////////////////////////////////////////////////////////////////////
