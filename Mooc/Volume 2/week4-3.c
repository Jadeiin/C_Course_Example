#include <stdio.h>
int main() {
   int i,x,a[10];
   int *h=0;
   for(i=0;i<10;++i)scanf("%d",&a[i]);
   scanf("%d",&x);
   for(i=0;i<10;++i)if(h==0&&a[i]==x)h=&a[i];
   if(h==0)puts("No");
   else printf("%d\n",*h);
   return 0;
}