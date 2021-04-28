/**********************************************************************************************************
NAME: CANDIDA RUTH NORONHA
CLASS: SE COMPS B
ROLL NO. : 8960
BATCH: C
TITLE: DIJKSTRA'S ALGORITHM
SUBMISSION DATE : 25th MARCH, 2021
**********************************************************************************************************/

#include <stdio.h>
#define INFINITY 9999
#define MAX 10

void Dijkstra(int Graph[MAX][MAX], int n, int start)
 {
  int cost[MAX][MAX], distance[MAX], pred[MAX];
  int visited[MAX], count, mindistance, nextnode, i, j;

  // Creating cost matrix
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      if (Graph[i][j] == 0)
        cost[i][j] = INFINITY;
      else
        cost[i][j] = Graph[i][j];

  for (i = 0; i < n; i++)
  {
    distance[i] = cost[start][i];//initially distance is cost of the edge from source to that node
    pred[i] = start;//predecessor is the source node
    visited[i] = 0;//node not visited
  }

  //beginning from source node
  distance[start] = 0;//distance of source node from itself is 0
  visited[start] = 1;//mark source node as visited
  count = 1;

  while (count < n - 1)
  {
    mindistance = INFINITY;

    for (i = 0; i < n; i++)
      if (distance[i] < mindistance && !visited[i])
      {
        mindistance = distance[i];
        nextnode = i;
      }

    visited[nextnode] = 1;
    for (i = 0; i < n; i++)
      if (!visited[i])
        if (mindistance + cost[nextnode][i] < distance[i])
        {
          distance[i] = mindistance + cost[nextnode][i];
          pred[i] = nextnode;
        }
    count++;
  }

  // Printing the distance
  for (i = 0; i < n; i++)
    if (i != start) {
      printf("\nDistance from source to %d: %d", i, distance[i]);
    }
    printf("\n");
}
int main() {
  int Graph[MAX][MAX], i, j, n, u;

  printf("\n------------------------------------------------------------------------------------------------\n");
  printf("\n Enter the number of nodes in the Graph : ");
  scanf("%d",&n);
  printf("\n------------------------------------------------------------------------------------------------\n");

  printf("\n Enter the adjacency matrix of the Graph : \n");
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
        scanf("%d",&Graph[i][j]);
  printf("\n------------------------------------------------------------------------------------------------\n");

  u = 0;
  Dijkstra(Graph, n, u);
  printf("\n------------------------------------------------------------------------------------------------\n");
  return 0;
}

/**********************************************************************************************************

 OUTPUT :
 
------------------------------------------------------------------------------------------------

 Enter the number of nodes in the Graph : 6

------------------------------------------------------------------------------------------------

 Enter the adjacency matrix of the Graph :
  0 20 15  0  0  0
  2  0  0  0 10 30
  0  0  0  4  0 10
  0  0  0  0  0  0
  0  0  0 15  0  0
  0 10  0  4 10  0

------------------------------------------------------------------------------------------------

Distance from source to 1: 20
Distance from source to 2: 15
Distance from source to 3: 19
Distance from source to 4: 30
Distance from source to 5: 25

------------------------------------------------------------------------------------------------

**********************************************************************************************************/
