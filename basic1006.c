#include <stdio.h>

int main(){
	int n,i,index = 0;
	scanf("%d",&n);
	int a[3];
	
	void display1(int a);
	void display2(int a);
	void display3(int a);
	
	while(n != 0)
	{
		a[index++] = n%10;
		n /= 10;
	}
	index = index - 1;
	for (i = index; i >= 0; i--)
	{
		if (i == 0) display1(a[i]);
		if (i == 1) display2(a[i]);
		if (i == 2) display3(a[i]);
	}
	return 0;
}

void display1(int a){
	int i;
	for(i = 0; i < a; i++)
		printf("%d",i+1);
}

void display2(int a){
	int i;
	for(i = 0; i < a; i++)
		printf("S");
}

void display3(int a){
	int i;
	for(i = 0; i < a; i++)
		printf("B");
}