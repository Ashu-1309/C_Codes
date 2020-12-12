#include<stdio.h>
int main()
{
    int num,sum=0,arr[10];
    printf("Input number of terms to display ");
    scanf("%d",&num);
    printf("Here is the Fibonacci series upto to %d terms \n",num);
    arr[0]=0;
    arr[1]=1;

    for(int i=1;i<num-1;i++)
    {
        arr[i+1]=arr[i]+arr[i-1];

    }
    for(int j=0;j<num;j++)
    {
        printf("%d  ",arr[j]);
    }
}