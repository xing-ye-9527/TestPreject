#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int max=a>=b?a:b;
    if(c>=max)
        max=c;
    if(d>=max)
        max=d;
    printf("%d",max);
}
