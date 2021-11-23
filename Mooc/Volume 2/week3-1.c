#include <stdio.h>
int main() {
   int n,step=1;
   scanf("%d",&n);
   while(n!=1)
   {
      if(n%2==1){printf("%d,",n);n=3*n+1;}
      else{printf("%d,",n);n/=2;}
      ++step;
   }
   printf("1\nstep=%d\n",step);
   return 0;
}