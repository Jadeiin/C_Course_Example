/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


char *resort(char *a); 
int main(int argc, char *argv[]) {
		
	char a[100];
	gets(a);
	puts(resort(a));
	return 0;
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */

char *resort(char *a)
{
	int i=0;
	while(a[i]!='\0')i++;
	for(int x=0;x<i;++x)
	{
		int z=x;
		for(int y=x;y<i;++y)
			if(a[z]>a[y]) z=y;
		char temp=a[x];
		a[x]=a[z];
		a[z]=temp;
	}
	return a;
}