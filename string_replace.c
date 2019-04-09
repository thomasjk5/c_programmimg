//program to replace a substring with given string
#include<stdio.h>
#include<string.h>
void main()
{ 
  char str[20][20],s[20],r[20];
  int n,i;
  printf("Enter the number of words : ");
  scanf("%d",&n);
  printf("\nEnter the String word by word\n");
  for(i=0;i<n;++i)
     { 
       scanf("%s",str[i]);
     }
  printf("\nThe string is : ");
  for(i=0;i<n;++i)
     { 
       printf("%s",str[i]);
       printf(" ");
     }

  printf("\nEnter the word to be Searched : ");
  scanf("%s",s);
  for(i=0;i<n;++i)
     { 
       if(strcmp(str[i],s)==0)
	 {
 	   printf("\nEnter the word to be replaced : ");
 	   scanf("%s",r);
	   strcpy(str[i],r);
	 }
     
      }
  printf("\nThe New String is : ");
  for(i=0;i<n;++i)
     { 
       printf("%s",str[i]);
       printf(" ");
     }
}
