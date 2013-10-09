#include <stdio.h>
#include <string.h>
int main(){
	char p[80];
	int  index1,index2;
	void printWord(int index1, int index2, char *p);
	
	gets(p);
	index1 = index2 = strlen(p)-1;
	while(index1 != 0)
	{
		if (p[index1--] == ' '){
			printWord(index1+2,index2,p);
			printf(" ");
			index2 = index1; 
		}
	}
	printWord(index1,index2,p);
	return 0;
}
void printWord(int start, int end, char *p)
{
	for (int i = start; i <= end; i++)
		printf("%c",p[i]);	
}
/*

	flag[0] = 0;
	for (i = 0; i < strlen(p); i++)
	{
		if (p[i] == ' ')
		{
			flag[++index] = i;
		}
	}
	index ++;
	flag[index] = strlen(p);
	for (i = index -1; i >= 0; i--)
	{
		if (i != 0)
		{
			for (j = flag[i]+1; j < flag[i+1]; j++)
				printf("%c",p[j]);
		    printf(" ");
		}
		else
		{
			for (j = flag[i]; j < flag[i+1]; j++)
				printf("%c",p[j]);
		}
	}
	*/