
/**********************************************************************************************************
NAME: CANDIDA RUTH NORONHA
CLASS: SE COMPS B
ROLL NO. : 8960
BATCH: C
TITLE: FIND MINIMUM AND MAXIMUM ELEMENT FROM AN ARRAY
SUBMISSION DATE : 22nd February, 2021
**********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int findMinMax(int a[],int low,int high,int *min,int *max)
{
    int minL, minR, maxL, maxR, mid;
	if(high == low)
        *min = *max = a[low];
    else if(low+1 == high)
    {
        if(a[low]<a[high])
        {
            *min = a[low];
            *max = a[high];
        }
        else
        {
            *min = a[high];
            *max = a[low];
        }
    }
    else
    {
        mid = ( low + high )/2;
        findMinMax(a, low, mid, &minL, &maxL);
        findMinMax(a, mid+1, high, &minR, &maxR );

        if(minL < minR)
            *min = minL;
        else
            *min = minR;

        if(maxL > maxR)
            *max = maxL;
        else
            *max = maxR;
    }
    return;
}
int main()
{
	int a[SIZE], i, n,min,max, low = 0, high;
	printf("\n Enter the number of elements in the array : ");
	scanf("%d",&n);
	printf("\n Enter the elements of the array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    high = n-1;
    findMinMax(a, low, high, &min, &max);
    printf("\n------------------------------------------------------------------------------------------------\n");
    printf(" The minimum element is : %d\n\n The maximum element is : %d", min, max);
    printf("\n------------------------------------------------------------------------------------------------\n");

	return 0;
}

/**********************************************************************************************************

 OUTPUT :

 TEST CASE 1:

 Enter the number of elements in the array : 7

 Enter the elements of the array : 31 20 18 27 52 16 25

------------------------------------------------------------------------------------------------
 The minimum element is : 16

 The maximum element is : 52
------------------------------------------------------------------------------------------------


 TEST CASE 2:

 Enter the number of elements in the array : 5

 Enter the elements of the array : 25 45 15 5 10

------------------------------------------------------------------------------------------------
 The minimum element is : 5

 The maximum element is : 45
------------------------------------------------------------------------------------------------

 **********************************************************************************************************/

