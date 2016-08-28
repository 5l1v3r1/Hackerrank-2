#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	int a[6][6];
	int sum=0,temp=-548124;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
				if(sum>temp)temp=sum;
			}			
		}		
	printf("%d",temp);
	return 0;
}