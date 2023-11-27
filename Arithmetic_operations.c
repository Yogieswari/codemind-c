#include<stdio.h>
int main()
{
    int a,b,C,D,E,F,G;
    scanf("%d%d",&a,&b);
    C=a+b;
    D=a-b;
    E=a*b;
    F=a/b;
    G=a%b;
    printf("Sum:%d
",C);
    printf("Difference:%d
",D);
    printf("Product:%d
",E);
    printf("Quotient:%d
",F);
    printf("Remainder:%d
",G);
    return 0;
}
