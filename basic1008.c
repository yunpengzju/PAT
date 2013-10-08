#include <stdio.h>

int main(){
	int i,j,m,n;
	int a[100];
	scanf("%d%d",&n,&m);
	for (i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	j = n - m;
	while (j<0) j += n;
	for (i = 0; i < n; i++)
	{
		printf("%d",a[j%n]);
		if (i != n-1) printf(" ");
		j++;
	} 

	return 0;
}