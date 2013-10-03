#include <stdio.h>
struct stu{
	char name[11];
	char id[11];
	int  score;
};

int main(){
	int i,n,score,max = 0,min = 101;
	struct stu s1,smax,smin;
	
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%s%s%d",s1.name,s1.id,&s1.score);
		if(s1.score > max){
			smax = s1;
			max  = s1.score;
		}
		if(s1.score < min){
			smin = s1;
			min  = s1.score;
		}
	}
	printf("%s %s\n",smax.name,smax.id);
	printf("%s %s\n",smin.name,smin.id);

	return 0;
	
}