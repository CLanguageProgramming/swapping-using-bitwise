/*
x=0101
y=1010
x^=y
x=1111
y=x-y
x=y-x
*/
#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter number a\n>>");
    scanf("%d", &a);
    printf("Enter number b\n>>");
    scanf("%d", &b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d\nb=%d", a, b);
}
