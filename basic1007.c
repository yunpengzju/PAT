#include <stdio.h>
#include <math.h>
int main(){
	int i,n,count;
	int isPrime(int a);
	scanf("%d",&n);
	count = 0;
	for (i = 3; i <= n; i = i+2)
	{
		if ((isPrime(i) == 1)&&(isPrime(i-2) == 1)) count++;
	}
	
	printf("%d",count);
	return 0;
}
int isPrime(int a)
{
	int i;
	if (a <= 1) return -1;
	if (a == 2) return 1;
	else if(a%2 == 0) return -1;
	
	for (i = 3; i <= sqrt(a); i++)
	{
		if (a%i == 0) return -1;
	}
	return 1;
}
