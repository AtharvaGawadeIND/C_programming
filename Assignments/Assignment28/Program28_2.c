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
//  Description     : It prints a matrix where even row start from small 'a' and odd row contain captial 'A'
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
    char ch1 = 'A';
    char ch2 = 'a';

    for(i = 1; i <= iRow; i++)
    {
        ch1 = 'A';
        ch2 = 'a';

        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t", ch2);
                ch2++;
            }
            else
            {
                printf("%c\t", ch1);
                ch1++;
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
//      A   B   C   D
//      a   b   c   d
//      A   B   C   D
//      a   b   c   d
//
//  Input : 3 5
//  Output:
//      A   B   C   D   E
//      a   b   c   d   e
//      A   B   C   D   E
//
///////////////////////////////////////////////////////////////////////////////////////
