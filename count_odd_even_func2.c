#include<stdio.h>
int even (int a[],int n1)
 { int c=0,c1=0;
  for(int i=0;i<n1;i++)
   {
    if(a[i]%2==0)
     {
        c++;
     }
    else
     {
           c1++;
     }

  }
 printf("\nNo of Even elements=%d",c);
 printf("\nNo of Odd elements=%d",c1); 
  }
void main()
{
  int arr[10],i,c=0,n,x,c1=0;
  printf("Enter the number of elements " );
  scanf("%d",&n);
  printf("Enter the elements : ");
  for(i=0;i<n;i++)
   { scanf("%d",&arr[i]);
   }
  
    even(arr,n);

}
