#include<stdio.h>

int main(){
	int num;
	int i,j;
	for(i=8;i>=5;i--)
	{
		for(j=5;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}
