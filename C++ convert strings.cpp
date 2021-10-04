#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[50], str2[50], temp[50];
    printf("Enter the First String: ");
    gets(str1);
    printf("Enter the Second String: ");
    gets(str2);
    printf("\nString before Swap:\n");
    printf("First String = %s\tSecond String = %s", str1, str2);
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    printf("\n\nString after Swap:\n");
    printf("First String = %s\tSecond String = %s", str1, str2);
    getch();
    return 0;
}
