#include <stdio.h>
#include <stdlib.h>

int isKey(int a, int b);
void sortKey(int a[], int length);
void display(int a[], int length);
void error(char *a);

int main(){
	int i,j,n,flag;
	int num[100];
	int key[100];
	int keyNum = 0;
		
	scanf("%d",&n);

	for(i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}

	for(i = 0; i < n; i++)
	{
		flag = 0;
		for(j = 0; j < n; j++)
		{
			if (i == j) continue;
			flag = isKey(num[j],num[i]);
			if(flag < 0) break;
		}
		if(flag > 0) key[keyNum++] = num[i];
	}
	
	sortKey(key,keyNum);
	display(key,keyNum);
	return 0;
}

int isKey(int a, int b){
	if (a < 1) error("function isKey:invalid input");
	if (b == 1)  return -1;
	if (a == b)  return -1;
	while(a != 1){
		if(a%2 == 0) a = a / 2;
		else a = (3 * a + 1) / 2;
		
		if(a == b) return -1;
	}
	return 1;
}

void sortKey(int a[], int length)
{
	int i,j,temp;
	for (i = 0; i < length-1; i++)
	{
		for (j = 0; j < length-i-1; j++)
		{
			if (a[j] < a[j+1])
			{
				temp  = a[j];
				a[j]  = a[j+1];
				a[j+1]= temp;
			}
		}
	} 
}
void display(int a[],int length)
{
	int i;
	for (i = 0; i < length; i++)
	{
		if (i != length-1) printf("%d ",a[i]);
		else printf("%d",a[i]);
	}
}

void error(char *a)
{
	printf("%s\n",a);
	exit(0);
}