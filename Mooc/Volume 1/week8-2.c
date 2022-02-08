#include <stdio.h>
int main(void)
{
   int m,n,x,y,b,c,d,e,flag;
   scanf("%d %d",&m,&n);
   int a[m][n];
   for(x=0;x<m;++x)
   {
      for(y=0;y<n;++y)
      scanf("%d",&a[x][y]);
   }
   for(x=0,e=0;x<m;++x)
   {
      for(c=a[x][0],y=0;y<n;++y)
      {
         if(a[x][y]>c)c=a[x][y],d=y;
      }
      for(flag=0,b=0;b<m;++b)
      {
         if(a[b][d]<c)flag=1;
      }
   if(flag!=1)printf("Point:a[%d][%d]==%d",x,d,c);
   if(flag==1)++e;
   }
   if(e==m)printf("No Point\n");
   return 0;
}