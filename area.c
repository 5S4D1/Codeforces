#include<stdio.h>
int main()
{
    int h, m;
    /*while (scanf("%d %d",&h,&m)!= EOF)
    {
    printf("%.2d:%.2d\n",h/30,m/6);
    }*/
    h = 5;
    m = 6;
    printf("%.2d:%3d",h,m);
    return 0;
}