
// Write a C program to reverse an array in groups of given
// size Swap 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

#include<stdio.h>

void groupwiserev(int arr[],int n,int k)
{
    for(int i=0;i<n;i=i+k)
    {
        int right;
        int left=i;
        if(i+k-1<n)
        {
            right=i+k-1;
        }
        else
        {
            right=n-1;
        }
        while(left<right)
        {
            arr[left]^=arr[right]^=arr[left]^=arr[right];
            left++;
            right--;
        }
        
    }
    
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    groupwiserev(arr,n,k);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

// Input
// 15 
// 3
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
// Output
// 3	2	1	6	5	4	9	8	7	12	11	10	15	14	13	
