/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : ChkVowel
//  Description :   It returns true if vowels are present 
//  Input :         char *
//  Output :        bool
//  Author :        Atharva Vinod Gawade
//  Date :          1/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkVowel(char *str)
{
    while(*str!='\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') ||
            (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') )
        {
            return true;
        }
        str++;
    }
    return false;
}   // End of ChkVowel

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20] = {'\0'};
    bool bRet = false;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if( bRet == true )
    {
        printf("Vowels are present in the string\n");
    }
    else
    {
        printf("Vowels are not present in the string\n");
    }

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
//
//  Input:
//  Enter string:
//  Marvellous
//  Output:
//  Vowels are present in the string
//
//  Input:
//  Enter string:
//  Demo
//  Output:
//  Vowels are present in the string
//
//  Input:
//  Enter string:
//  xyz
//  Output:
//  Vowels are not present in the string
//
/////////////////////////////////////////////////////////////////////////////////////////////////