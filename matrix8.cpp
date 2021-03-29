#include<stdio.h>

int main()
{
	int i,j,n=0,num;
	printf("Enter a no: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			n++;
			printf("%d",n);
		}
	
	    
	    printf("\n");
	}
}
