// Created on Poesty’s iPad.

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int solve(char ch[],int i)
{
   int le=strlen(ch)-1,num=0,index=1;
   while(le!=0)
   {
      num+=index * (isdigit(ch[le-1])?(int)(ch[le-1]-'0'):(int)(ch[le-1]-'A'+1));
      index *= i;
      le--;
   }
   return num;
}
int Max(char M[])
{
   int x,y,maxM=0;
   int leM=strlen(M);
   for(x=0;x<leM;++x)
   {
      y=isdigit(M[x])?(int)(M[x]-'0'):(int)(M[x]-'A'+10);
      if(y>maxM)maxM=y;
   }
   return maxM;
}
int main() {
   char M[20],N[20];
   int i,m,x;
   scanf("%s %s",M,N);getchar();
   int mM=Max(M),mN=Max(N);
   int max=mM>mN?mM:mN;
   int min=mM>mN?mN:mM;
//   int m=solve(M),n=solve(N);
   for(i=min+1;i<37;++i)
   {
      for(m=max+1;m<37;++m)
      {
         if(mM>mN)
         {
            if(solve(N,i)==solve(M,m))
            {
               printf("%s (base %d) = %s (base %d)\n",M,m,N,i);
               return 0;
            }
         }
         else
         {
            if(solve(M,i)==solve(N,m))
            {
               printf("%s (base %d) = %s (base %d)",M,i,N,m);
               return 0;
            }
         }
      }
   }
   printf("%s is not equal to %s in any base 2..36\n",M,N);
   return 0;
}