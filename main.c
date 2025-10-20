#include<stdio.h>
#include"mylib.h"

int main()
{
    int n, choice;
    printf("Enter an integer.\n");
    scanf("%d", &n);
    printf("Enter: \n 1 to Check for Armstrong number\n 2 to check for Adams number\n 3 to check for Prime palindrome number\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        if(isArmstrong(n))
        {
            printf("It is an Armstrong number.");
        }
        else
        {
            printf("It is not an Armstrong number.");
        }
        break;

        case 2:
        if(isAdams(n))
        {
            printf("It is an Adams number.");
        }
        else
        {
            printf("It is not an Adams number.");
        }
        break;

        case 3:
        if(isPrimePalindrome(n))
        {
            printf("It is a Prime palindrome number.");
        }
        else
        {
            printf("It is not a Prime palindrome number.");
        }
        break;

        default:
        printf("Wrong choice. Exiting program. Goodbye!\n");
    }
}
