#include <stdio.h>
int main (void)
{
	float hour,min,angle;
	scanf("%f %f",&hour,&min);
	angle = -min*6+min/2+hour*30;
	angle = angle<0?-angle:angle;
	printf("At %d:%02d the angle is %.1f degrees.",(int)hour,(int)min,angle>=180?360-angle:angle);
	putchar('\n');
	return 0;
}