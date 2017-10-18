#include<stdio.h>
#define Addition(a,b) a+b;
#define Substraction(a,b) a-b;
#define Multiplication(a,b) a*b;
#define IntegerDivision(a,b) a/b;
#define RealDivision(a,b) (float)a/b;
#define Modulus(a,b) a%b;
void main()
{
    int a,b,x;
    float y;
    printf("a=");
    scanf("%i",&a);
    printf("b=");
    scanf("%i",&b);
    x=Addition(a,b);
    printf("Addition : %i\n",x);
    x=Substraction(a,b);
    printf("Substraction : %i\n",x);
    x=Multiplication(a,b);
    printf("Multiplication : %i\n",x);
    x=IntegerDivision(a,b);
    printf("Integer division : %i\n",x);
    y=RealDivision(a,b);
    printf("Real division : %.4f\n",y);
    x=Modulus(a,b);
    printf("Modulus : %i\n",x);
}
