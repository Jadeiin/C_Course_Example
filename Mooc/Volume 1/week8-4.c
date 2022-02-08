#include <stdio.h>
#include <string.h>
int main() {
   int n,x,y,S,Y;
   scanf("%d\n",&n);
   char a[n][30];
   char b[12]={"10X98765432"};
   for(x=0;x<n;++x)fgets(a[x],30,stdin);
   for(x=0;x<n;++x)
   {
   if(a[x][15]!='\n')
   {
   S=7*(int)(a[x][0]-'0')+9*(int)(a[x][1]-'0')+10*(int)(a[x][2]-'0')+5*(int)(a[x][3]-'0')+8*(int)(a[x][4]-'0')+4*(int)(a[x][5]-'0')+2*(int)(a[x][6]-'0')+(int)(a[x][7]-'0')+6*(int)(a[x][8]-'0')+3*(int)(a[x][9]-'0')+7*(int)(a[x][10]-'0')+(int)(a[x][11]-'0')*9+(int)(a[x][12]-'0')*10+(int)(a[x][13]-'0')*5+(int)(a[x][14]-'0')*8+(int)(a[x][15]-'0')*4+(int)(a[x][16]-'0')*2;
   Y=S%11;
   if(b[Y]==a[x][17])printf("Valid\n");else printf("Invalid\n");
   }
   else if(a[x][12]=='9'&&a[x][13]=='9'&&a[x][14]>'5'&&a[x][14]<='9')
   {
   for(y=16;y>7;--y)
   {
   a[x][y]=a[x][y-2];
   }
   a[x][6]='1';
   a[x][7]='8';
   S=7*(int)(a[x][0]-'0')+9*(int)(a[x][1]-'0')+10*(int)(a[x][2]-'0')+5*(int)(a[x][3]-'0')+8*(int)(a[x][4]-'0')+4*(int)(a[x][5]-'0')+2*(int)(a[x][6]-'0')+(int)(a[x][7]-'0')+6*(int)(a[x][8]-'0')+3*(int)(a[x][9]-'0')+7*(int)(a[x][10]-'0')+(int)(a[x][11]-'0')*9+(int)(a[x][12]-'0')*10+(int)(a[x][13]-'0')*5+(int)(a[x][14]-'0')*8+(int)(a[x][15]-'0')*4+(int)(a[x][16]-'0')*2;
   Y=S%11;
   a[x][17]=b[Y];
   a[x][18]='\n';
   printf("%s",a[x]);
   }
   else 
      {
   for(y=16;y>7;--y)
   {
   a[x][y]=a[x][y-2];
   }
   a[x][6]='1';
   a[x][7]='9';
   S=7*(int)(a[x][0]-'0')+9*(int)(a[x][1]-'0')+10*(int)(a[x][2]-'0')+5*(int)(a[x][3]-'0')+8*(int)(a[x][4]-'0')+4*(int)(a[x][5]-'0')+2*(int)(a[x][6]-'0')+(int)(a[x][7]-'0')+6*(int)(a[x][8]-'0')+3*(int)(a[x][9]-'0')+7*(int)(a[x][10]-'0')+(int)(a[x][11]-'0')*9+(int)(a[x][12]-'0')*10+(int)(a[x][13]-'0')*5+(int)(a[x][14]-'0')*8+(int)(a[x][15]-'0')*4+(int)(a[x][16]-'0')*2;
   Y=S%11;
   a[x][17]=b[Y];
   a[x][18]='\n';
   printf("%s",a[x]);
   }
}
/**   for(x=0;x<n;++x)printf("%lu",sizeof(a[x]));fputs(a[x],stdout);**/
   return 0;
}#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
   int n,i,x,d1=0,d2=0,d3=0,d4=0,dd;
   scanf("%d\n",&n);
   const int N=n;
   char passwd[N][25];
   for(i=0;i<n;++i)fgets(passwd[i],25,stdin);
   for(i=0;i<n;++i)
   {
      d1=0;d2=0;d3=0;d4=0;
      for(x=0;passwd[i][x]!='\n';++x)
      {
         if(isupper((int)passwd[i][x])!=0)d1=1;
         else if(islower((int)passwd[i][x])!=0)d2=1;
         else if(isdigit((int)passwd[i][x])!=0)d3=1;
         else if(ispunct((int)passwd[i][x])!=0)d4=1;
      }
      dd=d1+d2+d3+d4;
      if(x<6)printf("Not Safe\n");
      else if(dd<2)printf("Not Safe\n");
      else if(dd==2)printf("Medium Safe\n");
      else if(dd>2)printf("Safe\n");
   }
   return 0;
}