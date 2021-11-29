#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <time.h> //
void nitoa(int a,char c[])
{
	int b=a,i=0;
	char d[6];
	while(b)
	{
		d[i++]=b%10+'0';
		b/=10;
	}
	b=strlen(d);
	i=0;
	while(b--)
		c[i++]=d[b];
}
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int order(int *a,int *b)
{
	char string1[6],string2[6];
	nitoa(*a,string1);
	nitoa(*b,string2);
	if(strcmp(string1,string2)<0)
	{
		int temp=*a;
		*a=*b;
		*b=temp;
		return 1;
	}
	else return 0;
}
void sort(int num[],int level[],int i)
{
	for(int x=0;x<i;++x)
	{
		int z=x;
		for(int y=x;y<i;++y)
			if(level[z]>level[y]) z=y;
			else if(level[z]==level[y])
				order(&num[z],&num[y]);
		int temp=num[x];
		num[x]=num[z];
		num[z]=temp;
			temp=level[x];
		level[x]=level[z];
		level[z]=temp;
	}
}
int main(void)
{
	FILE *fp;
	char file[20];
	int T,N;
	gets(file);
	fp=fopen(file,"r");
	fscanf(fp,"%d\n",&T);
	while(T--)
	{	
		fscanf(fp,"%d\n",&N);
		int *num=(int *)malloc(N*sizeof(int));
		int *level=(int *)malloc(N*sizeof(int));
		int i=0,flag=0;
//		clock_t begin=clock(); //
		for(int n=0;n<N;++n)
		{
			int temp1,temp2;
			fscanf(fp,"%d %d\n",&temp1,&temp2);
			if(temp2>=100)num[i]=temp1,level[i]=temp2,flag=1,i++;
		}
		sort(num,level,i);
		while(i--)
			printf("%d\n",num[i]);
		if(!flag) printf("This OJ is too easy for PQ Dashen!\n");
		free(num);
		free(level);
//		clock_t end=clock(); //
//		printf("%f seconds",(double)(end-begin)/CLOCKS_PER_SEC); //
		if(T)putchar('\n');
	}
	fclose(fp);
	return 0;
}