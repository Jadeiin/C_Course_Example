#include <stdio.h>
#include <string.h>
int date(long x,char a[][25])
{
	int year=(int)(a[x][6]-'0')*1000+(int)(a[x][7]-'0')*100+(int)(a[x][8]-'0')*10+(int)(a[x][9]-'0');
	int month=(int)(a[x][10]-'0')*10+(int)(a[x][11]-'0');
	int day=(int)(a[x][12]-'0')*10+(int)(a[x][13]-'0');
	int back=0;
	if((year%4==0&&year%100!=0)||year%400==0)
	{
		switch(month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:{if(day<1||day>31)back=0;else back=1;break;}
			case 4:
			case 6:
			case 9:
			case 11:{if(day<1||day>30)back=0;else back=1;break;}
			case 2:{if(day<1||day>29)return 0;else return 1;break;}
		}
		return back;
	}
	else
	{
		switch(month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:{if(day<1||day>31)back=0;else back=1;break;}
			case 4:
			case 6:
			case 9:
			case 11:{if(day<1||day>30)back=0;else back=1;break;}
			case 2:{if(day<1||day>28)return 0;else return 1;break;}
		}
		return back;
	}
}
int main(void)
{
	long n;
	int x,y,S,Y,i,flag;
	scanf("%ld\n",&n);
	const long N=n;
	char a[N][25];
	char b[11]={"10X98765432"};
	int c[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	for(x=0;x<n;++x)fgets(a[x],25,stdin);
	for(x=0;x<n;++x)
	{
		flag=0;
		for(i=0;i<15;++i)if(a[x][i]>'9'||a[x][i]<'0')flag=1;
		if(flag==1){printf("Invalid\n");continue;}
		if(strlen(a[x])==19)
		{
			for(i=0,S=0;i<17;++i)S+=(int)(a[x][i]-'0')*c[i];
   			Y=S%11;
			if(b[Y]==a[x][17]&&date(x,a))printf("Valid\n");else printf("Invalid\n");
   		}
		else if(strlen(a[x])==16&&a[x][12]=='9'&&a[x][13]=='9'&&a[x][14]>'5'&&a[x][14]<='9')
   			{
   			for(y=16;y>7;--y) a[x][y]=a[x][y-2];
   			a[x][6]='1';
   			a[x][7]='8';
   			for(i=0,S=0;i<17;++i)S+=(int)(a[x][i]-'0')*c[i];
   			Y=S%11;
   			a[x][17]=b[Y];
   			a[x][18]='\n';
   			printf("%s",a[x]);
   			}
   		else if(strlen(a[x])==16)
    	{
   		for(y=16;y>7;--y)a[x][y]=a[x][y-2];
  	 	a[x][6]='1';
   		a[x][7]='9';
		for(i=0,S=0;i<17;++i)S+=(int)(a[x][i]-'0')*c[i];
		Y=S%11;
   		a[x][17]=b[Y];
   		a[x][18]='\n';
   		printf("%s",a[x]);
   		}
		else printf("Invalid\n");
	}
   	return 0;
}