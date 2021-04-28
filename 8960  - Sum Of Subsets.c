/**********************************************************************************************************
NAME: CANDIDA RUTH NORONHA
CLASS: SE COMPS B
ROLL NO. : 8960
BATCH: C
TITLE: SUM OF SUBSETS
SUBMISSION DATE : 12th APRIL, 2021
**********************************************************************************************************/
#include<stdio.h>

int w[10]={0};
int n,s=0,sol[10]={0},tot_pl=0,count=0;

int promising(int l,int wsf,int tpl)//to check whether the node is promising
{
	if(wsf+w[l+1]<=s && wsf+tpl>=s)//check the required two conditions
	{
		return 1;
	}
	return 0;
}

void sum_of_subsets(int l,int wsf,int tpl)
{
	int i;
	if(wsf==s)
	{
		count++;
		printf("\n Solution Vector %d : ",count);	//print the solution vector
	     	printf("[\t");
	     	for(i=1;i<=n;i++)
	     	{
                printf("%d\t",sol[i]);
            }
            printf("]");
		printf("\n");
	}
	else if(promising(l,wsf,tpl))//check whether the node is promising
	{
		sol[l+1]=1;
		sum_of_subsets(l+1,wsf+w[l+1],tpl-w[l+1]);
		sol[l+1]=0;
		sum_of_subsets(l+1,wsf,tpl-w[l+1]);
	}
}

int main()
{
 	int i;
 	printf("\n------------------------------------------------------------------------------------------------\n");
	printf("\n Enter the number of distinct items : ");//number of items
	scanf("%d",&n);

    printf("\n------------------------------------------------------------------------------------------------\n");
	for(i=1;i<=n;i++)
	{
		printf("\n Enter the weight of the Item Number %d : ",i);//enter weight
		scanf("%d",&w[i]);
		tot_pl=tot_pl+w[i]; 	//Calculating total profit
	}
	printf("\n------------------------------------------------------------------------------------------------\n");
	printf("\n Enter the Maximum allowed weight : ");//maximum weight
	scanf("%d",&s);
	printf("\n------------------------------------------------------------------------------------------------\n");

	sum_of_subsets(0,0,tot_pl); // call to sum of subset method
    printf("\n------------------------------------------------------------------------------------------------\n");

	return 0;
}


/**********************************************************************************************************

OUTPUT:

------------------------------------------------------------------------------------------------

 Enter the number of distinct items : 4

------------------------------------------------------------------------------------------------

 Enter the weight of the Item Number 1 : 1

 Enter the weight of the Item Number 2 : 3

 Enter the weight of the Item Number 3 : 4

 Enter the weight of the Item Number 4 : 5

------------------------------------------------------------------------------------------------

 Enter the Maximum allowed weight : 8

------------------------------------------------------------------------------------------------

 Solution Vector 1 : [  1       1       1       0  ]

 Solution Vector 2 : [  0       1       0       1  ]

------------------------------------------------------------------------------------------------

**********************************************************************************************************/
