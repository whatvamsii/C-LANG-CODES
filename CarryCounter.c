// CarryCounter
#include <stdio.h>

int main() {
int n1,n2,count=0,sum=0;
int r1,r2;
int result=0;
scanf("%d %d",&n1,&n2);
while(n1 != 0 || n2!=0)
{
    r1=n1%10;
    r2=n2%10;
    sum=r1+r2+count;
    if(sum>9)
    {
    count=1;
    result=result+1;
    }
    else
    count=0;
    n1=n1/10;
    n2=n2/10;
}
printf("%d",result);
}
