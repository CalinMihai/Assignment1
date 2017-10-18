#include<stdio.h>
#include<math.h>
void main()
{
    float n1,n2,x;
    int inv=0,n;
    printf("n1=");
    scanf("%f",&n1);
    printf("n2=");
    scanf("%f",&n2);
    printf("Square root of n1 %.5f\n",sqrt(n1));
    printf("Square root of n2 %.5f\n",sqrt(n2));
    printf("n1 raised to the power of n2 %.0f\n",pow(n1,n2));
    n=floor(n1);
    inv=0;
    while(n!=0)
    {
      inv=inv*10+n%10;
      n=n/10;
    }
    printf("Inverted n1 %i\n",inv);
    n=floor(n2);
    inv=0;
    while(n!=0)
    {
      inv=inv*10+n%10;
      n=n/10;
    }
    printf("Inverted n2 %i\n",inv);
}
