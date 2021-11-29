/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int merge_sort(char *a,char *b,char *c); 
int main(int argc, char *argv[]) {
		
	char a[100];
        char b[100];
        char c[200];

	gets(a);
        gets(b);
       merge_sort(a,b,c);
	puts(c);
	return 0;
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
int merge_sort(char *a,char *b,char *c)
{
	int i=0,j=0;
	while(a[i]!='\0')i++;
	while(b[j]!='\0')j++;
	for(int d=0;d<i+j;++d)
		if(d<i)c[d]=a[d];
		else c[d]=b[d-i];
	c[i+j]='\0';
	for(int x=0;x<i+j;++x)
	{
		int z=x;
		for(int y=x;y<i+j;++y)
			if(c[z]>c[y]) z=y;
		char temp=c[x];
		c[x]=c[z];
		c[z]=temp;
	}	
	return 0;
}