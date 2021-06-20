// // Partition algorithm
#include <stdio.h>
int main(void) {
    int n;
    scanf("%d",&n);
	int *arr=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	
	
	int pivot=arr[0];
	int i=0;
	int j=n-1;
	
	while(i<j)//To check array been fully traversed
	{
	    while(arr[i]<=pivot)i++;
	    while(arr[j]>pivot)j--;
	    if(i<j)
	    {
	   // int temp=arr[i];
	   // arr[i]=arr[j];
	   // arr[j]=temp;
	   arr[i]^=arr[j]^=arr[i]^=arr[j];
	    }
	}
// 	int temp=arr[0];
// 	arr[0]=arr[j];
// 	arr[j]=temp;
	arr[0]^=arr[j]^=arr[0]^=arr[j];
	

	printf("The Array is:\n");
	for(int i=0;i<n;i++)
	{
	    printf("%d\t",arr[i]);
	}

}

/*
8
4 6 2 5 7 9 1 3

The Array is:
1	3	2	4	7	9	5	6
*/
