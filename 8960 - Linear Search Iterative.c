/**********************************************************************************************************
NAME: CANDIDA RUTH NORONHA
CLASS: SE COMPS B
ROLL NO. : 8960
BATCH: C
TITLE: LINEAR SEARCH ITERATIVE ALGORITHM
SUBMISSION DATE : 22nd February, 2021
**********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void linearSearchIterative(int a[],int n,int ele)
{
    int flag = 0, i;
	for(i = 0; i< n ; i++)
	{
		if (a[i] == ele)		//if consecutive elements not in order then swap
		{
			flag = 1;
			break;
		}
	}

	if (flag== 1)
	{
		printf("\n %d is present at location %d",ele,i+1);
		return i+1;
	}
	else
		printf("\n %d doesn't exist in the array",ele);

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

	printf("\n Enter the element to search :");
	scanf("%d",&ele);

	linearSearchIterative(a,n,ele);
	printf("\n");
	return 0;
}

/**********************************************************************************************************

 OUTPUT :


 TEST CASE 1:


 Enter the number of elements in the array : 5

 Enter the elements of the array : 20 4 10 67 27

 Enter the element to search :67

 67 is present at location 4



 TEST CASE 2:


 Enter the number of elements in the array : 5

 Enter the elements of the array : 20 4 10 67 27

 Enter the element to search :36

 36 doesn't exist in the array

 **********************************************************************************************************/

