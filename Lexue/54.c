/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>

int countsub( char *str, char *ss );

int main( )
{
    char s1[1000] = {0}, s2[100] = {0};
    gets(s1);
    gets(s2);
    printf("%d\n", countsub( s1, s2 ) );
}

int countsub( char *str, char *ss )
{
	int length=0,count=0,max=0,flag=0;
	while(ss[length]!='\0')length++;
	for(int i=0,j=0;str[i]!='\0';++i)
	{
		if(str[i]==ss[j])
			{
			if(j==length-1)j=0,count++;
			else j++;
			flag=1;
			}
		else if(flag)
			{j=0,flag=0;if(count>max)max=count;count=0;}
		else j=0;
	}
	return max>count?max:count;
}
/* PRESET CODE END - NEVER TOUCH CODE ABOVE */