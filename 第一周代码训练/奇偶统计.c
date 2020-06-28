#include<stdio.h>
int main()
{
    int i,n;
    int a=0;
    int b=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            a++;
            else
                b++;
    }
    printf("%d %d",b,a);
}
