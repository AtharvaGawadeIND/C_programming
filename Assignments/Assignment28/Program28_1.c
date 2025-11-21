#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0;
    int j  = 0;
    char ch ='A';

    for(i =0 ; i<iRow ;i++)
    {
        ch ='A';
        for(j = 0 ; j<iCol ; j++)
        {
            printf("%c\t",ch);
            ch++;

        }
        printf("\n");
    }

}

int main()
{

    int iValue1 = 0 , iValue2 = 0 ;

    printf("Enter the number of rows and columns");
    scanf("%d %d", &iValue1 , &iValue2);

    Pattern(iValue1 , iValue2);

    return 0 ;
}