#include <stdio.h>
#include <string.h>
#include <ctype.h>
int judge(const int i,int t[],int n[])
{
   int flag=0;
   const int score[15]={-50,-2,-3,-4,-5,-6,-7,-8,-9,-10,-20,-30,-40,-100,100};
   for(int x=0;x<13;++x)
      if(t[x]!=i)
         flag=1;
   if(!flag)
   {
      n[i-1]+=200;
      if(t[13]==i&&t[14]==i)n[i-1]+=300;
      else if(t[13]==i)n[i-1]+=score[13];
      else if(t[14]==i)n[i-1]+=score[14];
      if(t[15]==i)n[i-1]*=2;
      return 0;
   }
   flag=0;
   for(int x=0;x<15;++x)
      if(t[x]==i)
         flag=1;
   if(t[15]==i&&!flag)
   {
      n[i-1]+=50;
      return 0;
   }
   else if(t[15]==i) flag=2;
   for(int x=0;x<15;++x)
      if(t[x]==i)n[i-1]+=score[x];
   if(flag==2)n[i-1]*=2;
   return 0;
}
int main(void)
{
   while(1)
   {
      char ch[4][100];
      int n[4]={0};
      int t[16]={0};
      for(int i=0;i<4;++i)
         fgets(ch[i],100,stdin);
      if(ch[0][0]=='0'&&ch[1][0]=='0'&&ch[2][0]=='0'&&ch[3][0]=='0')
         break;
      for(int i=0;i<4;++i)
      {
         int num=0,j;
         for(j=0;isdigit(ch[i][j]);++j)
         {
            num*=10;
            num+=(int)ch[i][j]-'0';
         }
         for(int x=0;x<num;++x)
         {
         	char id[3]={0};
            int y=0;
            while(ch[i][j]==' '&&j<strlen(ch[i])) ++j;
            while(ch[i][j]!=' '&&ch[i][j]!='\n'&&j<strlen(ch[i])&&y<3)
               id[y++]=ch[i][j++];
            if(id[0]=='H')
            {
               int z=1,nrn=0;
               while(z<3&&isdigit(id[z]))
               {
                  nrn*=10;
                  nrn+=(int)id[z]-'0';
                  z++;
               }
               t[(nrn-1)%16]=i+1;
            }
            else if(id[0]=='S')  t[13]=i+1;
            else if(id[0]=='D')  t[14]=i+1;
            else if(id[0]=='C')  t[15]=i+1;
         }
         judge(i+1,t,n);
    	}
         for(int i=0;i<3;++i)
         {
            if(n[i]>0)printf("+%d ",n[i]);
            else printf("%d ",n[i]);
         }
         if(n[3]>0)printf("+%d",n[3]);
            else printf("%d",n[3]);
         putchar('\n');
      }
   return 0;
}