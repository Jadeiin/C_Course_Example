#include <stdio.h>
#include <string.h>
struct stu
{
	int num,s1,s2,s3;
};
int main(void)
{
	struct stu xs[3]={{1,90,80,70},{2,85,75,95},{3,88,84,65}};
	int id;
	char ch[3];
	gets(ch);
	if(!strcmp(ch,"max"))
	{
		for(int i=0;i<3;++i)
		{
			int k=i;
			for(int j=i;j<3;++j)
				if((xs[k].s1+xs[k].s2+xs[k].s3)>(xs[j].s1+xs[j].s2+xs[j].s3))
					k=j;
			struct stu temp;
			temp=xs[i];
			xs[i]=xs[k];
			xs[k]=temp;
		}
		printf("%d",xs[2].num);
	}
	else 
	{
		id=(int)ch[0]-'1';
		if(id<3)printf("%d\n",(xs[id].s1+xs[id].s2+xs[id].s3)/3);
		else printf("0\n");
	}
	return 0;
}