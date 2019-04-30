#include<stdio.h>
void tran(int [][10],int [][10],int,int);
void main()
{int a[10][10],b[10][10],r,c,i,j;
 printf("Enter the row and column : ");
 scanf("%d %d",&r,&c);
 printf("\nEnter the matrix : ");
 for(i=0;i<r;i++)
 {for(j=0;j<c;j++)
   {scanf("%d",&a[i][j]);
    }
    }
  printf("\nEnter the matrix 2: ");
 for(i=0;i<r;i++)
 {for(j=0;j<c;j++)
   {scanf("%d",&b[i][j]);
    }
    }
 tran(a,b,r,c);
  
 }
 
 void tran(int a[][10],int b[][10],int r,int c)
  {int c1[10][10];
    for(int i=0;i<r;i++)
 {for(int j=0;j<c;j++)
   {c1[i][j]=a[i][j]+b[i][j];
    }}
   printf("\nThe Resultant matrix is :\n");
   for(int i=0;i<r;i++)
 {for(int j=0;j<c;j++)
   {printf("%d\t",c1[i][j]);
   }
   printf("\n");
  }   
 }
