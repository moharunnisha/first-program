#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],mul[3][3];
	int i,j;
	printf("enter the elements of the matrica a[3*3]:\n");
	for (i=0;i<3;i++)
	{
	for (j=0;j<3;j++)
	{
	printf("a[%d][%d]=",i,j);
	scanf("%d",&a[i][j]);
}
}
	printf("enter the elements of the matrix b[3*3]:\n");
	for (i=0;i<3;i++)
	{
	for (j=0;j<3;j++)
	{
	printf("b[%d][%d]=",i,j);
	scanf("%d",&b[i][j]);
}
}
	for (i=0;i<3;i++)
	{
	for (j=0;j<3;j++)
	{
	mul[i][j]=a[i][j]*b[i][j];
}
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("\n the sum of the of the matrix %d",mul[i][j]);
		}
		}
		return 0;
	}

out put

enter the elements of the matrica a[3*3]:
a[0][0]=1
a[0][1]=2
a[0][2]=3
a[1][0]=4
a[1][1]=5
a[1][2]=6
a[2][0]=7
a[2][1]=8
a[2][2]=9
enter the elements of the matrix b[3*3]:
b[0][0]=1
b[0][1]=2
b[0][2]=3
b[1][0]=4
b[1][1]=5
b[1][2]=6
b[2][0]=7
b[2][1]=8
b[2][2]=9

 the sum of the of the matrix 1
 the sum of the of the matrix 4
 the sum of the of the matrix 9
 the sum of the of the matrix 16
 the sum of the of the matrix 25
 the sum of the of the matrix 36
 the sum of the of the matrix 49
 the sum of the of the matrix 64
 the sum of the of the matrix 81

------------------

