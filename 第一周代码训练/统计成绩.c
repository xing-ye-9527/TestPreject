#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float a[n];
    float max=0,min=100,avg=0;
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
        avg+=a[i];
    }
    avg/=n;
    printf("%.2f %.2f %.2f",max,min,avg);
}
