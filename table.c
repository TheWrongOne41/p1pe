#include <stdio.h>
#include <math.h>
 
int main()
{
    int i,n;
    long fact=1;
 
    printf("Enter the value of N: ");
    scanf("%d",&n);
 
    printf("No.\t Square\t Cube\t Square Root\t Factorial\n");
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        printf("%d \t %d \t %d \t %.2f \t\t %ld\n",i,(i*i),(i*i*i),sqrt((double)i),fact);
    }
     
    return 0;
}
