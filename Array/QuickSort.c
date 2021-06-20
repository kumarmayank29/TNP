#include<stdio.h>
int Partition(int arr[],int low,int high)
{
    int i=low,j=high,pivot=arr[low];
    while(i<j)
    {
        while(arr[i]<=pivot)i++;
        while(arr[j]>pivot)j--;
        if(i<j)
        {
            int temp=arr[i];
	        arr[i]=arr[j];
	        arr[j]=temp;
        }
        // arr[i]^=arr[j]^=arr[i]^=arr[j];
        
    }
    // arr[low]^=arr[j]^=arr[low]^=arr[j];
      int temp=arr[low];
	      arr[low]=arr[j];
	      arr[j]=temp;
    
    return j;
}

int Quicksort(int arr[],int low,int high)
{
    //Base Case
    if(low<high)
    {
    int pivotIndex=Partition(arr,low,high);
    Quicksort(arr,low,pivotIndex-1);
    Quicksort(arr,pivotIndex+1,high);
    }
}

int main()
{
    int arr[]={4,6,2,5,7,9,1,3};
    Quicksort(arr,0,7);
    for(int i=0;i<8;i++)
    {
        printf("%d\t",arr[i]);
    }
}
// Output
// 1	2	3	4	5	6	7	9
