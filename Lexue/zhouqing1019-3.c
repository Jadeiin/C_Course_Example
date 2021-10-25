#include <stdio.h>  
int main()  
{  
  int n,m;  
  scanf("%d",&n);  
  m = 2;  
  while(m<=n/2 &&n%m!=0 )  
  {    
    m++;  
  }   
  if(m>n/2) printf("yes\n"); else printf("no\n");    
  return 0;     
}  