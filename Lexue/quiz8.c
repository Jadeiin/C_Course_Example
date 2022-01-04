#include <stdio.h>
int main(void)
{
	double max=0,w[3],v[3];
	for(int i=0;i<3;++i)scanf("%lf",&w[i]);
	for(int i=0;i<3;++i)scanf("%lf",&v[i]);
	for(int i=0;i<3;++i)
		if(w[i]<=10&&max<v[i])max=v[i];
	if(w[0]+w[1]<=10&&max<v[0]+v[1])max=v[0]+v[1];
	if(w[1]+w[2]<=10&&max<v[1]+v[2])max=v[1]+v[2];
	if(w[0]+w[2]<=10&&max<v[0]+v[2])max=v[0]+v[2];
	if(w[0]+w[1]+w[2]<=10&&max<v[0]+v[1]+v[2])max=v[1]+v[2]+v[0];
	printf("MaxValue=%.1lf\n",max);
	return 0;
}