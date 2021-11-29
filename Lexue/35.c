#include <stdio.h>  
int main(void)  
{  
    int n;  
    scanf("%d",&n);  
    if(n%8!=0)puts("No change.");  
    else printf("%d,%d,%d\n",25*n/4,15*n/2,45*n/8);  
    return 0;  
}  