// Write a C program to count total number of even/odd
// elements in an array.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int evecnt=0,oddcnt=0;
    //Note n&1=0 -->Even Number and n&1=1 -->Odd Number
    for(int i=0;i<n;i++)
    {
        if(arr[i]&1)
        oddcnt++;
        else
        evecnt++;
    }
    printf("The even numbers are %d\n",evecnt);
    printf("The odd numbers are %d",oddcnt);
}

// Input
// 7
// 1 5 8 9 6 12 11
// Output
// The even numbers are 3
// The odd numbers are 4

