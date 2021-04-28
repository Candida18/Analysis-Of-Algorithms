/**********************************************************************************************************
NAME: CANDIDA RUTH NORONHA
CLASS: SE COMPS B
ROLL NO. : 8960
BATCH: C
TITLE: LINEAR SEARCH RECURSIVE ALGORITHM
SUBMISSION DATE : 22nd February, 2021
**********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int linearSearchRecursive(int a[],int n,int ele)
{
	if(n==0)
        return -1;
    else if(a[n-1]==ele)
        return n;
    else
        return(linearSearchRecursive(a,n-1,ele));
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

	printf("\n %d is present at location %d",ele,linearSearchRecursive(a,n,ele));

	printf("\n");
	return 0;
}

/**********************************************************************************************************

 OUTPUT :

 TEST CASE 1:

 Enter the number of elements in the array : 6

 Enter the elements of the array : 20 5 17 18 27 31

 Enter the element to search : 18

 18 is present at location 4


 TEST CASE 2:

 Enter the number of elements in the array : 4

 Enter the elements of the array : 2 18 27 17

 Enter the element to search : 10

 10 is present at location -1

 **********************************************************************************************************/

