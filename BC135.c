#include<stdio.h>
#include<math.h>
int main()
{
    int num=0;
    for(int i=100;i<1000;i++)
    {
        int flag=0;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
            if(flag==0){
                num++;
            }
            else{
                flag=0;
            }
    }
    printf("%d",num);
    return 0;
}
