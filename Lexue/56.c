#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double Mysqrt(double x,double p,double e)
{
	if(abs(p*p-x)<e)
		return p;
	else return Mysqrt(x,(p+x/p)/2,e);
}
int main(void)
{
	double x,e;
	scanf("%lf %e",&x,&e);
	printf("%.8lf\n",Mysqrt(x,sqrt(x),e));
	return 0;
}