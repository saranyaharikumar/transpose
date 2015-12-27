#include<stdio.h>
void main() 
{
  int a[10][10],n,i,j,t;
  printf("Enter the size\n");
  scanf("%d",&n);
  printf("Enter the values\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("given matrix\n");
  for(i=0;i<n;i++) 
  {
    for(j=0;j<n;j++) 
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  for(i=1;i<n;i++) 
  {
    for(j=0;j<i;j++) 
    {
      t=a[i][j];
      a[i][j]=a[j][i];
      a[j][i]=t;
    }
  }
  printf("Transpose matrix \n ");
  for(i=0;i<n;i++) 
  {
    printf("\n");
    for(j=0;j<n;j++) 
    {
      printf("%d\t",a[i][j]);
    }
  }
}
