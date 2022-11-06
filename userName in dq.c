/* WAP to print the name of the user in double quotes.
Expected output format – “Hello , Amit Kumar”*/

#include<stdio.h>
int main()
{
    char userName[20];
    printf("Enter User Name :");
    scanf("%s",&userName);
    printf("\"Hello , %s\"",userName);

    return 0;
}
