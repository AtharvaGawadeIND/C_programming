///////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Title           : Prints pattern using border, reverse diagonal, and region logic
//  Description     : Prints '*' on border and reverse diagonal,
//                    '#' above the reverse diagonal,
//                    '$' below the reverse diagonal.
//  Input           : Int, Int
//  Output          : Void
//  Author          : Atharva Vinod Gawade
//  Date            : 25/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow , int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1 ; i<=iRow ; i++)
    {
        for(j = 1 ; j<=iCol ; j++)
        {
            if((i + j) == (iCol + 1) || j == 1 || i == iRow || j == iCol || i == iRow || i == 1)
            {
                printf("*\t");
            }         
            else if((i + j) < (iCol + 1))
            {
                printf("#\t");
            }
            else 
            {
                printf("$\t");
            }
        }
        printf("\n");
    }

} // End of Pattern

//  Time Complexity : O(N^2)

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0 , iValue2 = 0 ;

    printf("Enter number of rows and columns");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1 , iValue2);

    return 0 ;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Sample Input / Output
//
//  Input : 6 6
//
//  Output :
//
//      *   *   *   *   *   *
//      *   #   #   #   *   *
//      *   #   #   *   $   *
//      *   #   *   $   $   *
//      *   *   $   $   $   *
//      *   *   *   *   *   *
//
//
///////////////////////////////////////////////////////////////////////////////////////
