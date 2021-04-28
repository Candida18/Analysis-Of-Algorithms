/**********************************************************************************************************
NAME: CANDIDA RUTH NORONHA
CLASS: SE COMPS B
ROLL NO. : 8960
BATCH: C
TITLE: OPTIMIZED BUBBLE SORT
SUBMISSION DATE : 22nd February, 2021
**********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void modBubbleSort(int a[],int n)
{
	int pass,j,t;
	int exchange = 1;//boolean variable to denote exchange has happened or not in the previous pass
	for(pass=1; pass<= n-1 && exchange==1 ; pass++)
	{
		exchange=0;	//assuming exchange won't happen in this pass

		for(j=0 ; j<n-pass ; j++)
		{
			if (a[j] > a[j+1])		//if consecutive elements not in order then swap
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				exchange=1;//exchange has occured
			}
		}
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
    modBubbleSort(arr,n);
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

 Enter the number of elements in the array : 5

 Enter the elements of the array : 8       6       -3      1       2

 The sorted array is :  -3      1       2       6       8

 **********************************************************************************************************/

