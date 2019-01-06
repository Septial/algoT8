#include<stdio.h>
void cetak();
void main()
{
    int a,b,t;
    a=5; b=2;
    t=a+b;
    cetak();
}
void cetak()
{
 printf("%d",t);
 //tersedia error, t tidak dikenal
}
