///////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

typedef int *IPTR;

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Description     : It accepts N numbers from user and display all such numbers which are divisible by 5
//  Input           : Int, Int
//  Output          : Void
//  Author          : Atharva Vinod Gawade 
//  Date            : 17/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 5 == 0)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
    printf("\n");
} // End of Display

//  Time Complexity : O(N)

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iLength = 0, iRet = 0;
    IPTR iPtr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);


    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if (NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }




    Display(iPtr, iLength);


    free(iPtr);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled succesfully by the application
//
//  Input : 85	66	3	80	93	88   
//   Output  : 85    80
//
///////////////////////////////////////////////////////////////////////////////////////