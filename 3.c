#include<stdio.h>
#include<string.h>
#define upcase(s) { strupr(s); }
#define lowcase(s) { strlwr(s); }
void main()
{
    char n[100];
        printf("First and last name : ");
    gets(n);
        printf("\n%s",n);
    upcase(n);
        printf("\n\nUpper : %s",n);
    lowcase(n);
        printf("\n\nLower : %s\n\n",n);
}
