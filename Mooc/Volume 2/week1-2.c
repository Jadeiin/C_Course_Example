#include <stdio.h>
void swap(int *a,int *b)
{
   if(*a>*b) {*a=(*a)^(*b);*b=(*a)^(*b);*a=(*a)^(*b);}
}
int main() {
   int i,j,a[10]={};
   for(i=0;i<9;++i){scanf("%d",&a[i]);getchar();}
   for(i=0;i<9;++i)
   {
      for(j=0;j<8-i;++j)
      swap(&a[j],&a[j+1]);
   }
   scanf("%d",&a[9]);
   for(i=0;i<10;++i)
   {
      for(j=0;j<9-i;++j)
      swap(&a[j],&a[j+1]);
   }
   for(i=0;i<9;++i)printf("%d,",a[i]);printf("%d\n",a[9]);
   return 0;
}