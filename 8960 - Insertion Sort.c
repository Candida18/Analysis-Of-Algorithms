/**********************************************************************************************************
NAME: CANDIDA RUTH NORONHA
CLASS: SE COMPS B
ROLL NO. : 8960
BATCH: C
TITLE: INSERTION SORT
SUBMISSION DATE : 22nd February, 2021
**********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void insertion_sort(int a[], int n)
{
	int pass,j;
	for(pass=1;pass<n;pass++)
	{
		int x=a[pass];	//at a time one element is inserted in sorted array
		int j=pass-1;//indicates end index of sorted array
		while(j>=0)
		{
			if(x>a[j])		//if in proper order break and go for next pass
				break;
			else
			{
				a[j+1]=a[j];//else make place for the element by shifting the element
				j--;//go for next element in sorted array from backwards
			}
		}

		a[j+1]=x;	//insert the element at proper position
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
    insertion_sort(arr,n);
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

 Enter the number of elements in the array : 6

 Enter the elements of the array : 20 40 10 30 60 50

 The sorted array is :  10      20      30      40      50      60

 **********************************************************************************************************/


