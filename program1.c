#include<stdio.h>
void main()
{float d;
int c;
printf("Enter the Number : ");
scanf("%f",&d);
c=d;
d=d-c;
printf("Integer part is %d",c);
printf("\n");
printf("Decimal part is %f",d);
}
	
