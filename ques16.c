#include<stdio.h>
//Ansh Tyagi IT 11912079
int main()
{
    int a,b,c,d,e,n,sum;
    printf("\n input: enter the numbers:");
    scanf("%d%d%d%d%d%d",&n,&a,&b,&c,&d,&e);
    printf("\n input: %d;%d,%d,%d,%d,%d",n,a,b,c,d,e);
    sum=a+b+c+d+e;
    printf("\n output: %d + %d + %d + %d + %d = %d",a,b,c,d,e,sum);
    return 0;
}
