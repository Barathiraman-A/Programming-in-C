//Multiplication table
#include<stdio.h>
void main()
{
	int i,num;
	printf("Enter the number whose multiplication table is to be displayed:");
	scanf("%d",&num);
	printf("The Multiplication table of %d:",num);
	for(i=1;i<=10;i++)
	{
		printf("\n%d * %d = %d",num,i,num*i);
	}
}
