/**********************************************************************************************************
NAME: CANDIDA RUTH NORONHA
CLASS: SE COMPS B
ROLL NO. : 8960
BATCH: C
TITLE: BUBBLE SORT
SUBMISSION DATE : 22nd February, 2021
**********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void bubbleSort(int a[],int n)
{
	int pass,j,t;

	printf("\n-----------------------------------Working-----------------------------------\n");
	for(pass = 1; pass<= n-1 ; pass++)
	{
	    printf("\n After Pass %d : ",pass);
		for(j=0 ; j<n-pass ; j++)
		{
			if (a[j] > a[j+1])		//if consecutive elements not in order then swap
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			printf("\t%d",a[j]);
		}
		printf("\n");
	}
	printf("\n-----------------------------------------------------------------------------\n");
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
    bubbleSort(arr,n);
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

 Enter the elements of the array : 5       4       -3      2       -1

-----------------------------------Working-----------------------------------

 After Pass 1 :         4       -3      2       -1

 After Pass 2 :         -3      2       -1

 After Pass 3 :         -3      -1

 After Pass 4 :         -3

-----------------------------------------------------------------------------

 The sorted array is :  -3      -1      2       4       5

 **********************************************************************************************************/

