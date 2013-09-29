#include <stdio.h>

int main(){
	char s[101];
	int  num[4];
	char temp;
	int i, sum;
	int top = 0;
	int charToNum(char c);
	void printNum(int t);
	
	temp = getchar();
	while(temp >= '0'&& temp<= '9')
	{
		s[top++] = temp;
		temp = getchar();	
	}	
	sum = 0;
	for(i = 0; i < top; i++)
	{
		sum += charToNum(s[i]);
	}
	top = 0;
	while(0 != sum)
	{
		num[top++] = sum%10;
		sum /= 10;
	}
	for(i = top-1; i >= 0; i--)
	{
		printNum(num[i]);
		if(0 != i) printf(" ");
	}
	return 0;
}

int charToNum(char c)
{	
	return c-'0'; 
}

void printNum(int t)
{
	switch(t)
	{
		case 0: printf("ling");break;
		case 1: printf("yi");break;
		case 2: printf("er");break;
		case 3: printf("san");break;
		case 4: printf("si");break;
		case 5: printf("wu");break;
		case 6: printf("liu");break;
		case 7: printf("qi");break;
		case 8: printf("ba");break;
		case 9: printf("jiu");	break;
	}

}