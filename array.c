#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	
	for (int i = n-1; i >= 0 ; i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}