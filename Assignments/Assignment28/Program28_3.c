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
//  Description     : It prints a matrix where each row contains the same alphabet 
//  Input           : Int, Int
//  Output          : Void
//  Author          : Atharva Vinod Gawade
//  Date            : 23/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow , int iCol)
{
    int i = 0;
    int j = 0;
    char ch = 'A';

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%c\t", ch);
        }

        ch++;
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

    printf("Enter the number of rows and columns\n");
    scanf("%d %d", &iValue1 , &iValue2);

    Pattern(iValue1 , iValue2);

    return 0 ;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled successfully by the application
//
//  Input : 4 4
//  Output:
//      A   A   A   A
//      B   B   B   B
//      C   C   C   C
//      D   D   D   D
//
//  Input : 3 5
//  Output:
//      A   A   A   A   A
//      B   B   B   B   B
//      C   C   C   C   C
//
///////////////////////////////////////////////////////////////////////////////////////
