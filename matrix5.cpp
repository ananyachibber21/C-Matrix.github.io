#include<stdio.h>
#include<math.h>

int main()

{
	int n;
	
	printf("Enter the num: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
	
}
