#include <stdio.h>
void main()
{
    int no = 0,sum = 0,x;
    printf("no=");
    scanf("%i",&no);
    while (no>0){
    no--;
    scanf("%i",&x);
    sum = sum + x;
    }
    printf ("The sum numbers is: %d", sum);
}
