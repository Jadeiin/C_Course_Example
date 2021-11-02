#include <stdio.h>
int main(void)
{
	int y,m,d,x,z=0,a;
	scanf("%d %d %d",&y,&m,&d);
	a=y;
	for(y-=1;y>1899;--y)if((y%4==0&&y%100!=0)||y%400==0)++z;
	x=(a-1899)*365+z;
	switch(m){
		case 12: x+=2;
		case 11: x+=3;
		case 10: x+=2;
		case 9: x+=3;
		case 8: x+=3;
		case 7: x+=2;
		case 6: x+=3;
		case 5: x+=2;
		case 4: x+=3;
		case 3: x+=(((y%4==0&&y%100!=0)||y%400==0)?1:0);
		case 2: x+=3;
		case 1: break;
	}
	x+=(d-1);
	x%=7;
	printf("%d",x);
	putchar('\n');
	return 0;
}