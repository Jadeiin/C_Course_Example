#include <string.h>
#include <stdio.h>
int judge(char ch[]) {
	int length=strlen(ch);
	int x;
	for(x=0; x<length-1; ++x) {
		if((ch[x+1]-ch[x])<0)return 1;
	}
	return 0;
}
int zuhe(int x,int y) {
	if(y==0)return 1;
	else if(x==y)return 1;
	else return zuhe(x-1,y-1)+zuhe(x-1,y);
}
int sum(int i,int k) {
	int n=0;
	while(--i) {
		n+=zuhe(k,i);
	}
	return n;
}
int check(char ch[]) {
	int length=strlen(ch),i,count=0,x;
	int nu[20];
	nu[0]=0;
	for(x=0;x<length;++x)
		nu[x+1]=(int)(ch[x]-'a'+1);
	if(length>1)
	{
		for(x=1;x<nu[1];++x)
			count+=zuhe(26-x,length-1);
		for(i=2;i<length;++i)
			for(x=nu[i-1]+1;x<nu[i];++x) count+=zuhe(26-x,length-i);
		count+=nu[length]-nu[length-1];
	} 
	else count=nu[1];
	return count+sum(length,26);
}
int main() {
	int N,i,x=0;
	char c;
	char ch[20];
	scanf("%d",&N);
	getchar();
	for(i=0; i<N; ++i) {
		while((c=getchar())!='\n')ch[x]=c,x++;
		ch[x]='\0';
		if(judge(ch))printf("0\n");
		else printf("%d\n",check(ch));
	}
	return 0;
}