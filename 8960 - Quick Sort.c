/**********************************************************************************************************
NAME: CANDIDA RUTH NORONHA
CLASS: SE COMPS B
ROLL NO. : 8960
BATCH: C
TITLE: QUICK SORT
SUBMISSION DATE : 22nd February, 2021
**********************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int partition(int a[], int low, int high)
{
	int x=a[low];	//pivot
	int down = low;
	int up = high;
	int t;
	while(down<up)		//until the boundaries are not crossed
	{
		while(a[down]<=x && down<high)	//if elements are smaller keep moving right(forward)
			down++;			//terminates when a smaller element is encountered

		while(a[up]>x && up>=low)	//if elements are greater keep moving left(backward)
			up--;			//terminates when a larger element is encountered

		if(down<up)		        //puts a smaller element at the down position
		{
			//swap up and down elements
			t=a[down];
			a[down]=a[up];
			a[up]=t;
		}
	}

	//now pivot will occupy the position given by the end of the list of smaller elements (up)
	a[low]=a[up];
	a[up]=x;
	return up;
}


void quick_sort(int arr[], int beg, int end)
{
	int loc;
	if (beg == end)
		return ;
	else if(beg < end)
    {
        loc = partition(arr, beg, end);
        quick_sort(arr, beg, loc-1);
        quick_sort(arr, loc+1, end);
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
    quick_sort(arr, 0, n-1);
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

 Enter the elements of the array : 27 10 36 18 25 45

 The sorted array is :  10      18      25      27      36      45

 **********************************************************************************************************/

