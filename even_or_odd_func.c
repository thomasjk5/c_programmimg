#include<stdio.h>
int even (int a)
 { if(a%2==0)
     {
      return 1;
     }
    else
     {
      return 0;
     }
  
  }
void main()
{
  int arr[10],i,x,n;
  printf("Enter the number of elements " );
  scanf("%d",&n);
  printf("Enter the elements : ");
  for(i=0;i<n;i++)
   { scanf("%d",&arr[i]);
   }
  x=even(arr[1]);
  if(x==1)
  { 
   printf("%d is Even",arr[1]);
  }  
  else
  {
   printf("%d is Odd",arr[1]);
  }
}

