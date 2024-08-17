/*c program to add the elements of the prime indices of the array*/


#include<stdio.h>
int prime(int m)
{
    if (m<=1)
    return 0;
    else
    {
        for(int i=2;i<=m/2;i++)
        {
            if(m%i==0)
            {
            return 0;
            }
        }
      return 1;
    }
}
int main()
{
    int n,arr[1000],add;
    printf("enter size");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(prime(i) == 1)
        add = add+arr[i];
    }
    printf("%d",add);
}
