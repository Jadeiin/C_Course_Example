#include <stdio.h>
int main() {
   int who,i,j,score[3][4];
   double sum=0;
   for(i=0;i<3;++i)
      for(j=0;j<4;++j)
         scanf("%d",&score[i][j]);
   scanf("%d",&who);
   for(i=who-1,j=0;j<4;++j){
      printf("%d",score[i][j]);
      sum+=score[i][j];
         if(j!=3)putchar(' ');else putchar('\n');
   }
   printf("%g\n",sum/4);
   return 0;
}