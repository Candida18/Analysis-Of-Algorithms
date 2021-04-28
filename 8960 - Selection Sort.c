/**********************************************************************************************************
NAME: CANDIDA RUTH NORONHA
CLASS: SE COMPS B
ROLL NO. : 8960
BATCH: C
TITLE: SELECTION SORT
SUBMISSION DATE : 22nd February, 2021
**********************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int smallest(int arr[], int k, int n)
{
	int pos = k, small = arr[k], i;
	for(i=k+1;i<n;i++)
	{
		if(arr[i] < small) //if array element is smaller than current minimum
		{
			small = arr[i]; //update minimum
			pos = i; //update 'pos'
		}
	}
	return pos;
}

void selection_sort(int arr[], int n)
{
	int k, pos, temp;
	for(k=0;k<n;k++)
	{
		pos = smallest(arr, k, n);
		temp = arr[k];
		arr[k] = arr[pos];
		arr[pos] = temp;
	}
}

int main()
{
	int arr[SIZE], i, n;
	printf("\n Enter the number of elements in the array : ");
	scanf("%d",&n);
	printf("\n Enter the elements of the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
    selection_sort(arr,n);
	printf("\n The sorted array is :");

	for(i=0;i<n;i++)
	{
		printf("\t%d",arr[i]);
	}
	printf("\n");
	return 0;
}

/**********************************************************************************************************

 OUTPUT :

 Enter the number of elements in the array : 8

 Enter the elements of the array : 39 9 81 45 90 27 72 18

 The sorted array is :  9       18      27      39      45      72      81      90

  **********************************************************************************************************/
