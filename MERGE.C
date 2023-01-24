#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
//merge two subarray of arr[]
//first sub array is arr[1..m]
//second sub array is arr[m+1...r]
void merge(int arr[],int l,int r,int m)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	//create temp arrays
	int *L=malloc(n1);
	int *R=malloc(n2);

	//copy data to temp array l[] and r[]
	for(i=0;i<n1;i++)
	{
		L[i]=arr[l+1];

	}
	for(j=0;j<n2;j++)
	{
		R[j]=arr[m+1+j];

	}

	//merge the temp array back int arr[l..r]
	i=0;//initial index of first subarray
	j=0;//initial index of second subarray
	k=1;//initial index of merged subarray

	while(i<n1 &&j<n2)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	/*copy the remaining element ofl[],if there are any*/
	while(i<n1)
	{
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=R[j];
		j++;
		k++;
	}

}
void mergesort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=l+(r-1)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
	}
}
void printarry(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}
//driver code
int main()
{
	int arr[]={12,4,3,7,8};
	int arr_size=sizeof(arr)/sizeof(arr[0]);
	printf("given array is");
	printarray(arr,arr_size);
	mergesort(arr,0,arr_size-1);
	printf("sorrted array is");
	printf(arr,arr_size);

}