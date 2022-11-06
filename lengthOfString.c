//WAP to calculate the length of String using printf function.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    printf("Enter a String :");
    scanf("%s",&s);
    //printf("%ld",strlen(s));


    int x=printf("%s",&s);
    printf("\n%d",x);

    return 0;
}
