/*C program that calculates the sum of indices of prime values in an array*/


#include<stdio.h>
    int prime(int n)
    
    {
        int flag;
        if (n <= 1)
        {
        return 1; 
        }
        for(int i=2;i<=n/2;i++)
        {
        if(n%i==0)
        {
        return 1;
        }
        }
        return 0;
    }
int main()
{
    int m,index=0, arr[100];

printf("Enter the size of the array: ");
scanf("%d", &m);

printf("Enter %d elements:\n", m);
for (int i = 0; i < m; i++) {
    scanf("%d", &arr[i]);
}
for(int j=0;j<m;j++)
{
    if(prime(arr[j])==0)
     index=index+j;
}
printf("%d",index);
}
