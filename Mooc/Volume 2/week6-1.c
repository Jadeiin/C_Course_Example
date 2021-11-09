#include <string.h>
#include <stdio.h>
int main (void)
{
    int count=0,i=0;
    char c,c1[10000],c2[10000];
    char *cp,*cp2=c1;
    while((c=getchar())!='\n')c1[i++]=c;
    scanf("%s",c2);
    while((cp=strstr(cp2,c2))!=NULL)
    {
        count++;
        cp2=cp+strlen(c2);
    }
    if(count==0)printf("No\n");
    else printf("%d",count);
    return 0;
}