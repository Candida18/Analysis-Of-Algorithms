/**********************************************************************************************************
NAME: CANDIDA RUTH NORONHA
CLASS: SE COMPS B
ROLL NO. : 8960
BATCH: C
TITLE: BINARY SEARCH ITERATIVE ALGORITHM
SUBMISSION DATE : 22nd February, 2021
**********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int binarySearchIterative(int a[],int beg,int end, int ele)
{
    int mid;
    while(beg <= end )
    {
        mid = (beg + end)/2;
        if (ele == a[mid])
            return mid + 1;
        else if(ele < a[mid])
            end = mid - 1;
        else if (ele > a[mid])
            beg = mid + 1;
    }
    return -1;
}

int main()
{
	int a[SIZE], i, n,ele;
	printf("\n Enter the number of elements in the array : ");
	scanf("%d",&n);
	printf("\n Enter the elements of the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\n Enter the element to search : ");
	scanf("%d",&ele);

	int loc = binarySearchIterative(a,0,n-1,ele);

	printf("\n %d is present at location %d",ele,loc);
	printf("\n");
	return 0;
}

/**********************************************************************************************************

 OUTPUT :


 TEST CASE 1:



 Enter the number of elements in the array : 6

 Enter the elements of the array : 7 4 10 25 68 27

 Enter the element to search :10

 10 is present at location 3



 TEST CASE 2:



 Enter the number of elements in the array : 5

 Enter the elements of the array : 20 4 10 67 27

 Enter the element to search : 12

 12 is present at location -1

 **********************************************************************************************************/

