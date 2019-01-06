#include<stdio.h>
int jumlah(int x, int y);

int main()
{
    int a,b,t;
    a=5; b=2;
    t=jumlah(a,b);
    printf("%d",t);
}
int jumlah(int x, int y)
{
    int h;
    h=x+y;
    return(h);
}
