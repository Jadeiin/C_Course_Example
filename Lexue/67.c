#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu
{
	char name[20];
	int score;
};
typedef struct stu S;
int main(void)
{
	int n;
	scanf("%d",&n);
	getchar();
	S list[n];
	for(int i=0;i<n;++i)
//		scanf("%s,%d\n",list[i].name,&list[i].score);
	{
		int x=0;
		char c;
		while((c=getchar())!=',')
			list[i].name[x++]=c;
		scanf("%d",&list[i].score);
		getchar();
	}
	if(n!=1)for(int i=0;i<n;++i)
		for(int j=0;j<n-1-i;++j)
			if(list[j].score<list[j+1].score)
			{
				S temp=list[j];
				list[j]=list[j+1];
				list[j+1]=temp;
			}
	for(int i=0;i<n;++i)
		printf("%s,%d\n",list[i].name,list[i].score);
	return 0;
}