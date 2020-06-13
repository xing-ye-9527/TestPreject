#include<stdio.h>
#define PI 3.14
int main()
{
    int a,b,c,r;
    float s1,s2,s3;
    scanf("%d %d %d %d",&a,&b,&r,&c);
    s1=a*b;
    s2=PI*r*r;
    s3=c*c;
    printf("%g\n%g\n%g",s1,s2,s3);
    return 0;
}
