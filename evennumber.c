#include <stdio.h>

int main()
{
	int number=1,n;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	printf("Even Numbers from 1 to %d:\n",n);
	while(number<=n){
		if(number%2 == 0)
			printf("%d ",number);
		number++;
	}
	return 0;
}
