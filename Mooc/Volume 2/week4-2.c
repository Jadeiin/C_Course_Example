#include <stdio.h>
int swap(int *a,int *b)
{
   int temp=*a;
   *a=*b;
   *b=temp;
   return 0;
}
int main() {
   int a[10],b=10,x,y;
   while(b--)scanf("%d",&a[9-b]);
   for(x=0;x<10;++x)
   {
      for(y=0;y<9-x;++y)
      {
         if(a[y]>a[y+1])swap(&a[y],&a[y+1]);
      }
   }
   for(b=0;b<9;++b)printf("%d,",a[b]);
   printf("%d\n",a[9]);
   return 0;
}