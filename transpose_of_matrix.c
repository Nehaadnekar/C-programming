#include<stdio.h>
void main()
{
  int a[5][5]={};
  int i,j,n,m;
  printf("enter the no. of row and columns for a matrix\n");
  scanf("%d%d",&n,&m);
  printf("enter the elements of matrix\n");
  for(i=0;i<n;i++)
  {
        for(j=0;j<m;j++)
        {
          scanf("%d",&a[i][j]);
        }
  }
  printf("your entered matrix is\n");
  printf("**************************\n");

  for(i=0;i<n;i++)
  {
        for(j=0;j<m;j++) 
        { 
           printf("%d\t",a[i][j]);
        }
  printf("\n");
  }
  printf("transpose of the matrix is\n");
  printf("**************************\n");
  for(i=0;i<m;i++)
  {
        for(j=0;j<n;j++)
        {
          printf("%d\t",a[j][i]);
        }
  printf("\n");
  }
}
