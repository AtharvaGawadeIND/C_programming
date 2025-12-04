/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : FirstChar
//  Description :   It returns the index at which a given character is found first 
//  Input :         char *
//  Output :        int 
//  Author :        Atharva Vinod Gawade
//  Date :          5/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int iIndex = -1;
    int iCount = 0;

    while(*str != '\0')
    {
       if((*str==ch) && (iIndex == -1))
       {   
            iIndex = iCount;
       }
       str++;
       iCount++;
    }
    return iIndex;
}   // End of FirstChar

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20] = {'\0'};
    char ch = '\0';
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character:\n");
    scanf(" %c",&ch);

    iRet = FirstChar(Arr,ch);

    if(iRet == -1)
    {
        printf("Character not present in the string\n");
    }
    else
    {
        printf("Character present at %d\n",iRet);
    }

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
//
//  Input:
//  Enter string:
//  Marvellous Multi OS
//  Enter character:
//  M
//  Output:
//  Character present at 0
//
//  Input:
//  Enter string:
//  HELLO 
//  Enter character:
//  s
//  Output:
//  Character not present in the string
//  
/////////////////////////////////////////////////////////////////////////////////////////////////
