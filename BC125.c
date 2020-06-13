#include<stdio.h>
int main()
{
    int a;
    char b;
    scanf("%d",&a);
    if(a>=90&&a<=100)
        b='A';
    else if(a>=80&&a<=89)
        b='B';
    else if(a>=70&&a<=79)
        b='C';
    else if(a>=60&&a<=69)
        b='D';
    else if(a>=0&&a<=59)
        b='E';
    else
        b='F';
    printf("%c",b);
    return 0;
}
