// "Circular Array Sum"
//calculates the sum of the next two elements in a circular manner for a given array.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int arrr[n];
    for(int i=0;i<n;i++)
    {
        if(i<n-2)
        arrr[i]=arr[i+1]+arr[i+2];
        else if(i==n-2)
        arrr[i]=arr[n-1]+arr[0];
        else
        arrr[i]=arr[0]+arr[1];
    }
    for(int i=0;i<n;i++)
    printf("%d ",arrr[i]);
}
