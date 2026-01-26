//multiplication table of any numbers

#include<stdio.h>
int main()
{
	int num,i ;
	printf("enter the value of num");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d*%d=%d",num,i,num*i);
	}
	return 0;
}
out put of this code

entere thr value of num 8

8*1=8
8*2=16
8*3=24
8*4=32
8*5=40
8*6=48
8*7=56
8*8=64
8*9=72
8*10=80
