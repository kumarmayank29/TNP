// Write a C program to move all zeros to the end of array.
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
    if(n==0)
    return 0;
    if(n==1)
    return arr[0];
    int lastnonzeroindex=0;
    //Traverse whole array and if element is non zero just place it at beginning of array and move lastnonzeroindex pointer.Once whole array is traversed all non zero
    //Elements are already present in start of array
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[lastnonzeroindex]=arr[i];
            lastnonzeroindex++;
        }
    }
    
    //All non Zero element have got their place in array so at last just fill array with zeros starting from lastnonzerodindex to length of array
    for(int i=lastnonzeroindex;i<n;i++)
    {
        arr[i]=0;
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

/*
5
0 1 0 3 12
Output
1	3	12	0	0
TC=O(n)
SC=O(1)*/
