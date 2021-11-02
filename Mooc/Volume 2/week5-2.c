#include <stdio.h>
int main() {
   int sign,temp,i,j,score[3][4];
   int max[3]={0},num[3]={0,1,2};
   double sum=0;
   for(i=0;i<3;++i)
      for(j=0;j<4;++j)
         scanf("%d",&score[i][j]);
   for(i=0;i<3;++i)
      for(j=0;j<4;++j)
         max[i]+=score[i][j];
   for(i=0;i<3;++i)
   {
      sign=i;
      for(j=i;j<3;++j)if(score[sign]>score[j])sign=j;
      temp=num[i];
      num[i]=num[sign];
      num[sign]=temp;
   }
   for(i=0;i<3;++i)
      for(j=0;j<4;++j)
         {
            printf("%d",score[2-num[i]][j]);
            if(j!=3)putchar(',');else putchar('\n');
         }
   return 0;
}