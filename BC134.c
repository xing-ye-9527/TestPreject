#include<stdio.h>
int main()
{
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    int max=i;
    if(j>=max)
        max=j;
    if(k>=max)
        max=k;
    printf("%d",max);
}
