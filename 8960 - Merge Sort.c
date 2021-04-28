/**********************************************************************************************************
NAME: CANDIDA RUTH NORONHA
CLASS: SE COMPS B
ROLL NO. : 8960
BATCH: C
TITLE: MERGE SORT
SUBMISSION DATE : 22nd February, 2021
**********************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void merge(int arr[],int beg, int mid, int end)
{
    int i=beg, j=mid+1, index=beg, temp[SIZE], k;
    while((i<=mid) && (j<=end))
    {
        if(arr[i] < arr[j]) //if element from sub-array 1 should be inserted first
        {
            temp[index] = arr[i]; //insert element from sub-array 1
            i++; //increment index of subarray 1
        }
        else
        {
            temp[index] = arr[j]; //insert element from sub-array 2
            j++; //increment index of sub-array 2
        }
        index++;
    }
    if(i>mid) //Copy the remaining elements of the right sub-array if any
    {
        while(j<=end)
        {
            temp[index] = arr[j];
            j++;
            index++;
        }
    }
    else //Copy the remaining elements of the left sub-array if any
    {
        while(i<=mid)
        {
            temp[index] = arr[i];
            i++;
            index++;
        }
    }
    for(k=beg;k<index;k++) //Copy the contents of temp array back to arr array(original array)
    {
        arr[k] = temp[k];
    }
}
void merge_sort(int arr[], int beg, int end)
{
	int mid;
	if(beg < end)
    {
        mid = (beg + end) / 2;
        merge_sort(arr, beg, mid); //recursive call for left sub-array
        merge_sort(arr, mid+1, end); //recursive call for right sub-array
        merge(arr, beg, mid, end); //merging left and right sub-array
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
    merge_sort(arr, 0, n-1);
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
