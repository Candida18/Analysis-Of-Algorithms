/**********************************************************************************************************
NAME: CANDIDA RUTH NORONHA
CLASS: SE COMPS B
ROLL NO. : 8960
BATCH: C
TITLE: GRAPH COLOURING
SUBMISSION DATE : 12th APRIL, 2021
**********************************************************************************************************/

#include<stdio.h>
int n,sol[10]={0},count=0,adj[11][11]={0},m;

int can_color(int node,int c)
{
	int j;
	for(j=1;j<=node-1;j++)
	{
		if(adj[j][node]==1 && sol[j]==c)//check whether the adjacent node's colour is same as c
			return 0;
	}
	return 1;
}

void m_color(int node)
{
	int i,j;
	for(i=1;i<=m;i++)
	{
		if(can_color(node,i))//check whether the node can be coloured with i
		{
			sol[node]=i;
			if(node==n)	//print solution vector
			{
				count++;
				printf("\n********** Solution Vector : %d **********",count);
	     			printf("\n");
	     			for(j=1;j<=n;j++)
	     			{
	     				if(sol[j]==1)	 //Changing 1 to Red
						printf("RED\t");
					else if(sol[j]==2) 	//Changing 2 to Green
						printf("GREEN\t");
					else if(sol[j]==3) 	//Changing 3 to Blue
						printf("BLUE\t");
					else if(sol[j]==4)	 //Changing 4 to Yellow
						printf("YELLOW\t");
					else if(sol[j]==5)	 //Changing 5 to Violet
						printf("VIOLET\t");
				}
				printf("\n");
			}
			else
				m_color(node+1);	//Call to m_color method
		}
	}

}

int main()
{
 	int i,s,e,d,deg;
    printf("\n------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t\t\t Graph Colouring\n");
    printf("\n------------------------------------------------------------------------------------------------\n");

 	printf("\n Enter the degree of the graph : ");//degree of the graph
	scanf("%d", &deg);
	printf("\n------------------------------------------------------------------------------------------------\n");
	m=deg+1;
	printf("\n Enter the no of vertices : ");
	scanf("%d", &n);

	printf("\n------------------------------------------------------------------------------------------------\n");
	printf("\n Enter the no of edges : ");
	scanf("%d", &e);
	printf("\n------------------------------------------------------------------------------------------------\n");
	for (i = 1; i <= e; i++)		//enter the graph
	{
		printf("\n For Relation No : %d", i);
		printf("\n Enter source node : ");
		scanf("%d", &s);
		if (s > n || s == 0)
		{
			printf("\n Invalid source Node\n Enter again ");
			i--;
			continue;
		}
		printf(" Enter destination node : ");
		scanf("%d", &d);
		if (d > n || s == 0)
		{
			printf("\n Invalid destination Node\n Enter again ");
			i--;
			continue;
		}
		adj[s][d] = 1;  //Undirected Graph
		adj[d][s] = 1;
	}
    printf("\n------------------------------------------------------------------------------------------------\n");
	m_color(1);
	printf("\n------------------------------------------------------------------------------------------------\n");
}

/**********************************************************************************************************

OUTPUT:

------------------------------------------------------------------------------------------------

                                 Graph Colouring

------------------------------------------------------------------------------------------------

 Enter the degree of the graph : 2

------------------------------------------------------------------------------------------------

 Enter the no of vertices : 4

------------------------------------------------------------------------------------------------

 Enter the no of edges : 4

------------------------------------------------------------------------------------------------

 For Relation No : 1
 Enter source node : 1
 Enter destination node : 2

 For Relation No : 2
 Enter source node : 2
 Enter destination node : 3

 For Relation No : 3
 Enter source node : 3
 Enter destination node : 4

 For Relation No : 4
 Enter source node : 4
 Enter destination node : 1

------------------------------------------------------------------------------------------------

********** Solution Vector : 1 **********
RED     GREEN   RED     GREEN

********** Solution Vector : 2 **********
RED     GREEN   RED     BLUE

********** Solution Vector : 3 **********
RED     GREEN   BLUE    GREEN

********** Solution Vector : 4 **********
RED     BLUE    RED     GREEN

********** Solution Vector : 5 **********
RED     BLUE    RED     BLUE

********** Solution Vector : 6 **********
RED     BLUE    GREEN   BLUE

********** Solution Vector : 7 **********
GREEN   RED     GREEN   RED

********** Solution Vector : 8 **********
GREEN   RED     GREEN   BLUE

********** Solution Vector : 9 **********
GREEN   RED     BLUE    RED

********** Solution Vector : 10 **********
GREEN   BLUE    RED     BLUE

********** Solution Vector : 11 **********
GREEN   BLUE    GREEN   RED

********** Solution Vector : 12 **********
GREEN   BLUE    GREEN   BLUE

********** Solution Vector : 13 **********
BLUE    RED     GREEN   RED

********** Solution Vector : 14 **********
BLUE    RED     BLUE    RED

********** Solution Vector : 15 **********
BLUE    RED     BLUE    GREEN

********** Solution Vector : 16 **********
BLUE    GREEN   RED     GREEN

********** Solution Vector : 17 **********
BLUE    GREEN   BLUE    RED

********** Solution Vector : 18 **********
BLUE    GREEN   BLUE    GREEN

------------------------------------------------------------------------------------------------

**********************************************************************************************************/

