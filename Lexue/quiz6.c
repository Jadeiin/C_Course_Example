#include <stdio.h>
struct stu
{
       int sid;
       char name[40];
       int score;
};
typedef struct stu A;
int main(void)
{
	int sid,i=0;
	FILE *fp=fopen("slist.dat","rb");
	A pe[2000];
	scanf("%d",&sid);
	while(fread(&pe[i],sizeof(A),1,fp)==1)i++;
	i=0;
	while(sid!=pe[i].sid)i++;
	printf("<学号>%d<姓名>%s<成绩>%d\n",pe[i].sid,pe[i].name,pe[i].score);
	fclose(fp);
	return 0;
}