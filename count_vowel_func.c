#include<stdio.h>
void vowel(char a[])
 {int c=0,i=0;
  while(a[i]!='\0')
  {
   if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
     {
     c++;
     }
   i++;
   }
   printf("\nNo of vowels=%d",c);
  }
 
void main()
{
char s[20];
printf("Enter the string :");
gets(s);
printf("\nThe string is :");
puts(s);
vowel(s);
}
