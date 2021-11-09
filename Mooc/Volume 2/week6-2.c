#include <stdio.h>
int main(void)
{
    double score[4][4]={{78,90,87,92},{88,91,89,78},{84,76,83,75},{88,90,71,83}};
    double average[2][4];
    for(int i=0;i<4;++i)
    {
        for(int x=0;x<4;++x)
            average[0][i]+=score[i][x];
        average[0][i]/=4;
    }
    for(int i=0;i<4;++i)
    {
        for(int x=0;x<4;++x)
            average[1][i]+=score[x][i];
        average[1][i]/=4;
    }
    printf("wanglei,%.2f\n",average[0][0]);
    printf("lihong,%.2f\n",average[0][1]);
    printf("zhangli,%.2f\n",average[0][2]);
    printf("liuming,%g\n",average[0][3]);
    printf("AVERAGE:%.2f,%.2f,%.2f,%g\n",average[1][0],average[1][1],average[1][2],average[1][3]);
    return 0;
}