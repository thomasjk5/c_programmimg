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
  int arr[10],i,c=0,n,x,c1=0;
  printf("Enter the number of elements " );
  scanf("%d",&n);
  printf("Enter the elements : ");
  for(i=0;i<n;i++)
   { scanf("%d",&arr[i]);
   }
  for(i=0;i<n;i++)
   {
     x=even(arr[i]);
   
     if(x==1)
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

