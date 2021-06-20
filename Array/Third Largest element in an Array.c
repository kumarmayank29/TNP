#include <stdio.h>
int main(void) {
    int n;
    scanf("%d",&n);
	int *arr=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
	    for(int j=i+1;j<n;j++)
	    {
	        if(arr[j]<arr[i])
	        {
	            int temp=arr[j];
	            arr[j]=arr[i];
	            arr[i]=temp;
	        }
	       
	    }
	}
	printf("The Array is:\n");
	for(int i=0;i<n;i++)
	{
	    printf("%d\t",arr[i]);
	}
	printf("\n\n");
	
	printf("The third largest element in the array is %d",arr[n-3]);
	return 0;
}

// Input
// 8
// 4 6 2 5 7 9 1 3
// Output
// The Array is:
// 1	2	3	4	5	6	7	9	
